function  [problemDef,problem,result,bayesResults] = runDram(problemDef,problemDef_cells,problemDef_limits,priors,controls)
debug = 0;

checks = controls.checks;
[problemDef,fitNames] = packparams(problemDef,problemDef_cells,problemDef_limits,checks);
%fitPriors = packPriors(priors,checks);

% Seed the Random Number Generator
rng(0);


%fitPriors = packpriors(priors,checks);

%First deal with priors.
%Make uniform priors from the
%min/max limits for now.
prior = {};
lims = problemDef.fitconstr;
% Get the li

for i = 1:length(fitNames)
    name = fitNames{i};
    value = problemDef.fitpars(i);
    min = lims(i,1);
    max = lims(i,2);
    mu = 0;
    sigma = Inf;
    thisGroup = {name, value, min, max, mu, sigma};
    params{i} = thisGroup;
end

params = params(:);

%prior = prior';plot(roughness,grid);

% %Tuning Parameters - fixed for now
% model.ssfun = @MCMC_Intrafun;
% 
% %prior = prior';
% %Tuning Parameters - fixed for now
% model.ssfun = @MCMC_Intrafun;
% %options.nsimu = 500;
%options.adaptInt = 100;
%options.method = 'dram';
%options.updatesigma = 0;
%options.burnInTime = 100;


loop = controls.repeats;
nsimu =  controls.nsimu;
burnin = controls.burnin;
adaptint = 100;%controls.adaptint;

problem = {problemDef ; controls ; problemDef_limits ; problemDef_cells};

res = [];
output = runBayes(loop,nsimu,burnin,adaptint,params,problem);

bayesResults.res = output.results;
bayesResults.chain = output.chain;
bayesResults.s2chain = output.s2chain;
bayesResults.sschain = output.sschain;
bayesResults.bestPars = output.bestPars;
bayesResults.bayesData = output.data;
bayesResults.bestFits = output.bestFits;
bayesResults.predlims = output.predlims;

problemDef.fitpars = output.bestPars;
problemDef = unpackparams(problemDef,controls);
[problem,result] = reflectivity_calculation_wrapper(problemDef,problemDef_cells,problemDef_limits,controls);

end


%-------------------------------------------------------
function LogLike = MCMC_Intrafun(pars,data)


%First calculate chisquared

chisq = fitfun(data,[],[],pars);
LogLike = log(exp(-chisq/2));
LogLike = -2*LogLike;

end





