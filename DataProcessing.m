ARRAY = importcsv( NAME )  % 2 x M array

rho = 1     %density 
Cp = 1      %specific heat
T = [ ]     %temp with thermosistors
t = [ ]     %time
L = 1       %length from active surface to thermoplug rear
Z = 1       %distance from thermoplug axis to a thermosistor location
k = 1       %material conductivity

% CSV array to plot
xaxis = ARRAY(:,1)
yaxis = ARRAY(:,2)
plot(xaxis,yaxis)

% CSV array plot to best fit polynomial
fittedPoly1 = polyfit(xaxis,yaxis,1);
fittedPoly2 = polyfit(xaxis,yaxis,2);
fittedPoly3 = polyfit(xaxis,yaxis,3);

equationBestFit = []

% find  dT/dt from CSV best fit polynomial equation 
dTdt = 

% multiply dT/dt with rho and Cp (achieves rate or stored thermal engergy / unit volume @ each pt)
    % Analytical or numerical?
integrandMatrix = dTdt .* rho * Cp

% Integrate from 0 to L with respect to Z
    % Analytical or numerical?
