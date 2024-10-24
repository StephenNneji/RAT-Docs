.. _livePlot:

===================
Live Updating Plots
===================
Sometimes it is useful to be able to monitor the progress of a fit in real time for long simulations. For Simplex and DE fits, RAT sends out 'events', which send out data concerning the
reflectivity, SLD's and more as the fit progresses. To visualize the plot event data, we use the live plots as follows:

.. tab-set-code::
    .. code-block:: Matlab
        
        % Make simplex controls
        controls = controlsClass();
        controls.procedure = procedures.Simplex;
        controls.maxIterations = 1000;
        
        % Activates the live plot 
        useLivePlot() 
        [problem, result] = RAT(problem, controls);

    .. code-block:: Python
        
        controls = RAT.Controls()
        controls.procedure = 'simplex'
        controls.maxIterations = 1000

        # Activates the live plot 
        with RAT.plotting.LivePlot(block=True):
            problem, result = RAT.run(problem, controls);

When the snippet above is run, a plot figure willed be opened and the plot will be updated every time a plot event is received. 


**Frequency of events**

To control how often the plot event is triggered, change the plot frequency parameter in the controls block as shown below, the default frequency is 20 which means the 
plot event is triggered after every 20 iterations:

.. tab-set-code::
    .. code-block:: Matlab
        
        % Make simplex controls
        controls = controlsClass();
        controls.procedure = 'simplex'
        
        % change plot frequency to 35
        controls.updatePlotFreq = 35;

    .. code-block:: Python
        
        controls = RAT.ControlsClass();
        controls.procedure = 'simplex'
        
        # change plot frequency to 35
        controls.updatePlotFreq = 35


.. tab-set::
    :class: tab-label-hidden
    :sync-group: code

    .. tab-item:: Matlab
        :sync: Matlab

        .. raw:: html
            :file: ../_outputs/matlab/controlSimplexPlotFreq.txt

    .. tab-item:: Python 
        :sync: Python
        
        .. raw:: html
            :file: ../_outputs/python/controlSimplexPlotFreq.txt

.. note::
    If you set the plot frequency too low (i.e. make the plot update too often), this will slow your fit as plotting takes time out of the analysis to update the figure.
    Updating every 20 iterations is a reasonable compromise between speed and utility. Also ensure the plot frequency is lower than the number of iteration otherwise the 
    plot will never be updated.

