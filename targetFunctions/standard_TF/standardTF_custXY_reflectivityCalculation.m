function [problem,reflectivity,Simulation,shifted_data,layerSlds,sldProfiles,allLayers] = standardTF_custXY_reflectivityCalculation(problemDef,problemDef_cells,problemDef_limits,controls)


% Pre-allocation - It's necessary to
% pre-allocate the memory for all the arrays
% for compilation, so do this in this block.

numberOfContrasts = problemDef.numberOfContrasts;
outSsubs = zeros(numberOfContrasts,1);
backgs = zeros(numberOfContrasts,1);
qshifts = zeros(numberOfContrasts,1);
sfs = zeros(numberOfContrasts,1);
nbas = zeros(numberOfContrasts,1);
nbss = zeros(numberOfContrasts,1);
chis = zeros(numberOfContrasts,1);
resols = zeros(numberOfContrasts,1);
allRoughs = zeros(numberOfContrasts,1);

reflectivity = cell(numberOfContrasts,1);
for i = 1:numberOfContrasts
    reflectivity{i} = [1 1 ; 1 1];
end

Simulation = cell(numberOfContrasts,1);
for i = 1:numberOfContrasts
    Simulation{i} = [1 1 ; 1 1];
end

shifted_data = cell(numberOfContrasts,1);
for i = 1:numberOfContrasts
    shifted_data{i} = [1 1 1; 1 1 1];
end

layerSlds = cell(numberOfContrasts,1);
for i = 1:numberOfContrasts
    layerSlds{i} = [1 1 1; 1 1 1];
end

sldProfiles = cell(numberOfContrasts,1);
for i = 1:numberOfContrasts
    sldProfiles{i} = [1 1; 1 1];
end

allLayers = cell(numberOfContrasts,1);
for i = 1:numberOfContrasts
    allLayers{i} = [1 ; 1];
end


switch para
    case 'single'
            
          [outSsubs,backgs,qshifts,sfs,nbas,nbss,resols,chis,reflectivity,...
             Simulation,shifted_data,layerSlds,sldProfiles,allLayers,...
             allRoughs] = standardTF_custXY_single(problemDef,problemDef_cells,...
             problemDef_limits,controls);
        
    case 'points'
        
          [outSsubs,backgs,qshifts,sfs,nbas,nbss,resols,chis,reflectivity,...
             Simulation,shifted_data,layerSlds,sldProfiles,allLayers,...
             allRoughs] = standardTF_custXY_paraPoints(problemDef,problemDef_cells,...
             problemDef_limits,controls);
        
%      case 'contrasts'
%                 [outSsubs,backgs,qshifts,sfs,nbas,nbss,resols,chis,...
%             reflectivity,Simulation,shifted_data,layerSlds,...
%             sldProfiles,allLayers,allRoughs] = ...
%             standardTF_custlay_paraContrasts...
%             (resample,numberOfContrasts,geometry,repeatLayers,cBacks, ...
%             cShifts,cScales,cNbas,cNbss,cRes,backs,shifts,sf,nba,nbs, ...
%             res,dataPresent,allData,dataLimits,simLimits,nParams,params, ...
%             contrastLayers,numberOfLayers,layersDetails,problemDef_limits, ...
%             fname,lang,path,backsType,calcSLD);
        
end

problem.ssubs = outSsubs;
problem.backgrounds = backgs;
problem.qshifts = qshifts;
problem.scalefactors = sfs;
problem.nbairs = nbas;
problem.nbsubs = nbss;
problem.resolutions = resols;
problem.calculations.all_chis = chis;
problem.calculations.sum_chi = sum(chis);
problem.allSubRough = allRoughs;
%problem.calculations.reflectivity = reflectivity;
%problem.calculations.Simulation = Simulation;
%problem.shifted_data = shifted_data;
%problem.layers = layerSlds;
%problem.calculations.slds = sldProfiles;
%problem.allLayers = allLayers;



% result = cell(1,6);
% 
% 
% 
% %result = {{};{};{};{};{};{};{}};
% result{1} = reflectivity;
% result{2} = Simulation;
% result{3} = shifted_data;
% result{4} = layerSlds;
% result{5} = sldProfiles;
% result{6} = allLayers;
% 
% 
% %Result coder definitions....
%  coder.varsize('result{1}',[Inf 1],[1 0]);           %Reflectivity
%  coder.varsize('result{1}{:}',[Inf 2],[1 0]);        
% % 
%  coder.varsize('result{2}',[Inf 1],[1 0]);           %Simulatin
%  coder.varsize('result{2}{:}',[Inf 2],[1 0]);
% % 
%  coder.varsize('result{3}',[Inf 1],[1 0]);           %Shifted data
%  coder.varsize('result{3}{:}',[Inf 3],[1 0]);
% % 
%  coder.varsize('result{4}',[Inf 1],[1 0]);           %Layers slds
%  coder.varsize('result{4}{:}',[Inf 3],[1 0]);
% % 
%  coder.varsize('result{5}',[Inf 1],[1 0]);           %Sld profiles
%  coder.varsize('results{5}{:}',[Inf 2],[1 0]);
% % 
%  coder.varsize('result{6}',[Inf 1],[1 0]);           %All layers 
%  coder.varsize('result{6}{:}',[Inf 1],[1 0]);



end