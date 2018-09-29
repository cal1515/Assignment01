/**
* Author: Cal Malone
*
* This program will compute the Compound Annual Growth Rate or the Annualized
* Rate of Return.
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)   {

double initialInvestmentValue ;
double finalInvestmentValue ;
double years ;
double weeks ;
double days ;
double yearsPassed ;
double annualizedReturnRate ;

printf("Initial Investment Value: \n") ;
scanf("%lf", &initialInvestmentValue) ;

printf("Final Investment Value: \n") ;
scanf("%lf", &finalInvestmentValue) ;

printf("Years Between Initial and Final Investment: \n") ;
scanf("%lf", &years) ;

printf("Weeks of Final Year in Between Initial and Final Investment: \n") ;
scanf("%lf", &weeks) ;

printf("Days of Final Week in Between Initial and Final Investment: \n") ;
scanf("%lf", &days) ;

yearsPassed = years + (weeks/52) + (days/365) ;
annualizedReturnRate = (pow((finalInvestmentValue/initialInvestmentValue),(1/yearsPassed))-1) * 100 ;

printf("Initial Value: $%lf \nFinal Value: $%lf \nYears: %lf \nAnnualized Rate of Return: %lf percent \n", initialInvestmentValue, finalInvestmentValue, yearsPassed, annualizedReturnRate) ;

return 0;
}
