function testParallel(problem);

controls = controlsDef;

num = 100;

controls.parallel = 'single';
disp('Running single');
tic; 
for i = 1:num
[outProb,results] = RAT(problem,controls); 
end
timSingle = toc/num;


controls.parallel = 'points';
disp('Running points');
tic; 
for i = 1:num
[outProb,results] = RAT(problem,controls); 
end
timPoints = toc/num;


controls.parallel = 'contrasts';
disp('Running contrasts');
tic; 
for i = 1:num
[outProb,results] = RAT(problem,controls); 
end
timContrasts = toc/num;

controls.parallel = 'all';
disp('Running all');
tic; 
for i = 1:num
[outProb,results] = RAT(problem,controls); 
end
timAll = toc/num;

all = [timSingle timPoints timContrasts timAll];

figure(10); clf; box on
title('RAT Parallelisation Timing Test');
clf
bar(all);
set(gca,'xticklabel',{'Single', 'Points', 'Contrasts', 'All'})
ylabel('Time per calculation (s)');


