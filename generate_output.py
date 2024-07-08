from pathlib import Path
import shutil
import RATpy as RAT


OUTPUT_DIR =  Path(__file__).parent / 'source/_outputs/python'

def write_output(output, filename):
    with open(OUTPUT_DIR/filename, 'w') as output_file:
        print(f'<pre>\n{output}\n\n</pre>', file=output_file)

def domains_example():
    problem = RAT.Project(calculation='domains')

    # Define the parameters we need to define our two domains
    problem.parameters.append(name="L1 Thickness", min=5.0, value=20.0, max=60.0, fit=True)
    problem.parameters.append(name="L1 SLD", min=3.0e-6, value=4.1e-6, max=5.0e-6, fit=False)
    problem.parameters.append(name="L1 Roughness", min=2.0, value=5.0, max=20.0, fit=True)
    problem.parameters.append(name="L1 Hydration", min=10.0, value=20.0, max=30.0, fit=True)

    problem.parameters.append(name="L2 Thickness", min=5.0, value=60.0, max=100.0, fit=True)
    problem.parameters.append(name="L2 SLD", min=2.1e-6, value=3.0e-6, max=5.0e-6, fit=False)
    problem.parameters.append(name="L2 Roughness", min=2.0, value=5.0, max=20.0, fit=True)
    problem.parameters.append(name="L2 Hydration", min=10.0, value=20.0, max=30.0, fit=True)

    problem.parameters.append(name="L3 Thickness", min=5.0, value=200.0, max=300.0, fit=True)
    problem.parameters.append(name="L3 SLD", min=3.0e-6, value=7.0e-6, max=8.0e-6, fit=False)
    problem.parameters.append(name="L3 Roughness", min=2.0, value=5.0, max=20.0, fit=True)
    problem.parameters.append(name="L3 Hydration", min=10.0, value=20.0, max=30.0, fit=True)

    # Now group these parameters into layers
    problem.layers.append(name='Layer 1', thickness='L1 Thickness', SLD='L1 SLD', roughness='L1 Roughness',
                        hydration='L1 Hydration', hydrate_with='bulk out')

    problem.layers.append(name='Layer 2', thickness='L2 Thickness', SLD='L2 SLD', roughness='L2 Roughness',
                        hydration='L2 Hydration', hydrate_with='bulk out')

    problem.layers.append(name='Layer 3', thickness='L3 Thickness', SLD='L3 SLD', roughness='L3 Roughness',
                        hydration='L3 Hydration', hydrate_with='bulk out')
    
    # If we look at the project, there are two extra groups as compared to a normal standard layers calculation:
    # Domain Contrasts and Domain Ratios
    problem.domain_contrasts.append(name="Domain 1", model=["Layer 1"])
    problem.domain_contrasts.append(name="Domain 2", model=["Layer 2", "Layer 3"])

    # Now make a contrast as with standard models, but this time also including the default domain ratio ("Domain Ratio 1")
    problem.contrasts.append(
        name="Domain Test",
        background="Background 1",
        resolution="Resolution 1",
        scalefactor="Scalefactor 1",
        resample=False,
        bulk_in="SLD Air",
        bulk_out="SLD D2O",
        domain_ratio="Domain Ratio 1",
        data="Simulation",
        model=["Domain 1", "Domain 2"],
    )

    return problem

if __name__ == '__main__':
    shutil.rmtree(OUTPUT_DIR, ignore_errors=True)
    OUTPUT_DIR.mkdir()

    controls = RAT.Controls()
    write_output(str(controls), 'controlDefaults.txt')

    controls.procedure = 'simplex'
    write_output(str(controls), 'controlSimplexDefaults.txt')

    controls.procedure = 'de'
    write_output(str(controls), 'controlDEDefaults.txt')

    # Tutorial Chapter2 code snippets

    problem = RAT.Project(name='my project')
    write_output(str(problem), 'tutorialProblem.txt')
    write_output(str(problem.parameters),  'tutorialDefaultParameters.txt')
    
    # TODO defaults are different in Python and Matlab
    problem.parameters.append(name='My new param', min=1, value=2, max=3)
    problem.parameters.append(name='My other new param', min=10, value=20, max=30, fit=False)
    write_output(str(problem.parameters), 'tutorialDefaultParameters.txt')

    pGroup = [RAT.models.Parameter(name='Layer thick', min=10, value=20, max=30, fit=True),
              RAT.models.Parameter(name='Layer SLD', min=1e-6, value=3e-6, max=5e-6, fit=True),
              RAT.models.Parameter(name='Layer rough', min=5, value=7, max=10, fit=True)]

    problem.parameters.extend(pGroup)
    write_output(str(problem.parameters), 'tutorialMoreParameters.txt')

    problem.parameters[1].name = 'My changed param'
    problem.parameters[1].min = 0.96
    problem.parameters[1].max = 3.62
    problem.parameters[3].value = 20.22
    problem.parameters[5].fit = False
    write_output(str(problem.parameters), 'tutorialSetParameters.txt')

    problem.parameters.set_fields(3, name='thick', min=15, max=33, fit=False)
    write_output(str(problem.parameters), 'tutorialSetParameters2.txt')

    del problem.parameters[3]
    write_output(str(problem.parameters), 'tutorialRemoveParameters.txt')

    # Layers Examples
    problem = RAT.Project(name='Layers Example')

    params = [RAT.models.Parameter(name='Layer Thickness', min=10, value=20, max=30, fit=False),
              RAT.models.Parameter(name='H SLD', min=-6e-6, value=-4e-6, max=-1e-6, fit=False),
              RAT.models.Parameter(name='D SLD', min=5e-6, value=7e-6, max=9e-6, fit=True),
              RAT.models.Parameter(name='Layer rough', min=3, value=5, max=7, fit=True),
              RAT.models.Parameter(name='Layer hydr', min=0, value=10, max=20, fit=True)]

    problem.parameters.extend(params)
    problem.layers.append(name='H Layer', thickness='Layer Thickness', SLD='H SLD',
                          roughness='Layer rough', hydration='Layer hydr', hydrate_with='bulk out')
    problem.layers.append(name='D Layer', thickness='Layer Thickness', SLD='D SLD',
                          roughness='Layer rough', hydration='Layer hydr', hydrate_with='bulk out')
    write_output(str(problem.layers), 'tutorialLayers1.txt')

    problem.layers.append(name='Dry Layer', thickness='Layer Thickness', SLD='D SLD', roughness='Layer rough')
    write_output(str(problem.layers), 'tutorialLayers2.txt')

    problem.layers.set_fields(0, thickness='H SLD')
    write_output(str(problem.layers), 'tutorialSetLayers.txt')

    # Bulk Phase
    problem.bulk_in.append(name='Silicon', min=2.0e-06, value=2.073e-06, max=2.1e-06, fit=False)
    problem.bulk_out.append(name='D2O', min=-0.6e-6, value=-0.56e-6, max=-0.5e-6, fit=False)
    'problem..displayTable();problem.bulkOut.displayTable()'
    write_output(f'{str(problem.bulk_in)}\n{str(problem.bulk_out)}', 'tutorialBulkPhase.txt')
    
    # problem.bulk_out.set_fields(0, value=5.9e-6, fit=True)
    # write_output(str(problem.layers), 'tutorialSetLayers.txt')

    # problem.scalefactors.append(name='New Scalefactor', min=0.9, value=1.0, max=1.1, fit=True)
    # problem.scalefactors.set_fields(0, value=1.01)
    # write_output(str(problem.layers), 'tutorialSetLayers.txt')

    # Backgrounds
    write_output(str(problem.backgrounds), 'tutorialDefaultBackground.txt')

    # TODO Python accepts unique names is case senstive  while matlab is not  
    problem.background_parameters.append(name='My New BackPar', min=1e-8, value=1e-7, max=1e-6, fit=True)
    problem.backgrounds.append(name='My New Background', type='constant', value_1='My New BackPar')
    write_output(str(problem.backgrounds), 'tutorialConstantBackground.txt')

    # TODO this does not work in Python but works in Matlab
    # problem.backgrounds.append(name='Data Background 1', type='data', value_1='My Background Data')
    # write_output(str(problem.backgrounds), 'tutorialDataBackground.txt')
    
    # Resolutions
    problem.resolution_parameters.append(name='My Resolution Param', min=0.02, value=0.05, max=0.08, fit=True)
    write_output(str(problem.resolutions), 'tutorialDefaultResolutions.txt')

    problem.resolutions.append(name='My new resolution', type='constant', value_1='My Resolution Param')
    problem.resolutions.append(name='My Data Resolution', type='data')
    write_output(str(problem.resolutions), 'tutorialResolutions.txt')

    # Data
    write_output(str(problem.data), 'tutorialDefaultData.txt')

    import numpy as np
    myData = np.loadtxt('API/RAT/examples/normalReflectivity/customXY/c_PLP0016596.dat', delimiter=",")
    problem.data.append(name='My new datafile', data=myData)
    write_output(str(problem.data), 'tutorialDataBlock.txt')


    problem = RAT.Project(name='DSPC monolayers')
    parameters = [RAT.models.Parameter(name='Tails Thickness', min=10, value=20, max=30, fit=True),
              RAT.models.Parameter(name='Heads Thickness', min=3, value=11, max=16, fit=True),
              RAT.models.Parameter(name='Tails Roughness', min=2, value=5, max=9, fit=True),
              RAT.models.Parameter(name='Heads Roughness', min=2, value=5, max=9, fit=True),
              RAT.models.Parameter(name='Deuterated Tails SLD', min=4e-6, value=6e-6, max=2e-5, fit=True),
              RAT.models.Parameter(name='Hydrogenated Tails SLD', min=-0.6e-6, value=-0.4e-6, max=0, fit=True),
              RAT.models.Parameter(name='Deuterated Heads SLD', min=1e-6, value=3e-6, max=8e-6, fit=True),
              RAT.models.Parameter(name='Hydrogenated Heads SLD', min=0.1e-6, value=1.4e-6, max=3e-6, fit=True),
              RAT.models.Parameter(name='Heads Hydration', min=0, value=0.3, max=0.5, fit=True)]

    problem.parameters.extend(parameters)
    H_Heads = RAT.models.Layer(name='Hydrogenated Heads', thickness='Heads Thickness',
                           SLD='Hydrogenated Heads SLD', roughness='Heads Roughness',
                           hydration='Heads Hydration', hydrate_with='bulk out')

    D_Heads = RAT.models.Layer(name='Deuterated Heads', thickness='Heads Thickness',
                            SLD='Deuterated Heads SLD', roughness='Heads Roughness',
                            hydration='Heads Hydration', hydrate_with='bulk out')

    D_Tails = RAT.models.Layer(name='Deuterated Tails', thickness='Tails Thickness',
                            SLD='Deuterated Tails SLD', roughness='Tails Roughness')

    H_Tails = RAT.models.Layer(name='Hydrogenated Tails', thickness='Tails Thickness',
                            SLD='Hydrogenated Tails SLD', roughness='Tails Roughness')
    
    problem.layers.extend([H_Heads, D_Heads, H_Tails, D_Tails])


    problem.background_parameters.set_fields(0, name='Backs Value ACMW')
    problem.background_parameters.set_fields(0, value=5.5e-6)
    problem.background_parameters.append(name='Backs Value D2O', min=1e-8, value=2.8e-6, max=1e-5)

    problem.backgrounds.append(name='Background D2O', type='constant', value_1='Backs Value D2O')
    problem.backgrounds.set_fields(0, name='Background ACMW', value_1='Backs Value ACMW')

    problem.bulk_out.append(name='SLD ACMW', min=-0.6e-6, value=-0.56e-6, max=-0.3e-6, fit=True)

    d13ACM = np.loadtxt('API/RAT/examples/miscellaneous/convertRasCAL1Project/d13acmw20.dat', delimiter=",")
    d70d2O = np.loadtxt('API/RAT/examples/miscellaneous/convertRasCAL1Project/d70d2o20.dat', delimiter=",")
    problem.data.append(name='H-tail / D-head / ACMW', data=d13ACM)
    problem.data.append(name='D-tail / H-head / D2O', data=d70d2O)

    problem.contrasts.append(name='D-tail/H-Head/D2O', background='Background D2O', resolution='Resolution 1',
                         scalefactor='Scalefactor 1', bulk_out='SLD D2O', bulk_in='SLD Air', data='D-tail / H-head / D2O')

    problem.contrasts.append(name='H-tail/D-Head/ACMW', background='Background ACMW', resolution='Resolution 1',
                         scalefactor='Scalefactor 1', bulk_out='SLD ACMW', bulk_in='SLD Air', data='D-tail / H-head / D2O')

    problem.contrasts.set_fields(0, model=['Deuterated Tails', 'Hydrogenated Heads'])
    problem.contrasts.set_fields(1, model=['Hydrogenated Tails', 'Deuterated Heads'])

    problem.background_parameters.set_fields(0, fit=True)
    problem.background_parameters.set_fields(1, fit=True)
    problem.scalefactors.set_fields(0, fit=True)
    problem.bulk_out.set_fields(0, fit=True)

    write_output(str(problem), 'tutorialFullProblem.txt')
    
    controls = RAT.Controls()
    # writeOutput(evalc('RAT(problem,controls);'), 'tutorialFullRun1.txt')

    controls.procedure = 'simplex'
    controls.parallel = 'contrasts'
    controls.display = 'final'
    write_output(str(controls), 'tutorialFullRun2.txt')
    
    p, results = RAT.run(problem, controls)
    write_output(str(results), 'tutorialFullRunResult.txt')

    write_output(str(problem.parameters), 'IntroParameters.txt')
    write_output(str(problem.layers), 'IntroLayers.txt')
    write_output(str(problem.data), 'IntroData.txt')
    write_output(str(problem.contrasts), 'IntroContrasts.txt')

    # Advanced code snippets

    problem.contrasts.set_fields(0, resample=True)
    del problem.contrasts[1]
    write_output(str(problem.contrasts), 'advancedResample.txt');

    problem.absorption = True
    write_output(str('problem.layers.displayTable()'), 'advancedAbsorption.txt')

    # Custom Models code snippets
    # [~, problem] = evalc('orsoDSPCCustomLayers()')
    write_output(str(problem.parameters), 'customLayersProblem.txt')

    # Saving project
    # myResults = struct('problem', problem, 'results', results, 'controls', controls);
    # write_output(evalc('myResults'), 'savingProject.txt', outputDir);

    # Domains snippets
    problem = domains_example()
    write_output(str(problem.layers), 'calcTypesDomainsLayers.txt')
    write_output(str(problem.domain_contrasts), 'calcTypesDomainsDomainConstrasts.txt') 
    write_output(str(problem.domain_ratios), 'calcTypesDomainsDomainRatio.txt')    
    write_output(str(problem.contrasts), 'calcTypesDomainsConstrasts.txt')
