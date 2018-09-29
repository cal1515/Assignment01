/**
* Author: Cal Malone
*
* This program will be using Snell's Law to calculate the angle of refraction
* of light as it passes through a medium.
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)   {

double indexOfRefraction ;
double angleOfIncidence ;
double angleOfRefraction ;
double angleOfIncidenceRad ;
double angleOfRefractionRad ;
int indexOfIncidence = 1 ;

printf("Angle of Incidence: \n") ;
scanf("%lf", &angleOfIncidence) ;

printf("Index of Refraction: \n") ;
scanf("%lf", &indexOfRefraction) ;

if(indexOfRefraction < 1) {
  printf("Error: Invalid n2. Please enter a value greater than 1.\n") ;
  exit(1) ;
}
if(angleOfIncidence < 0 || angleOfIncidence > 180) {
  printf("Error: Invalid angle. Please enter an angle in degrees between 0 and 180\n") ;
  exit(1) ;
}

angleOfIncidenceRad = (angleOfIncidence/180) * M_PI ;

angleOfRefractionRad = asin((indexOfIncidence * sin(angleOfIncidenceRad))/indexOfRefraction) ;

angleOfRefraction = (angleOfRefractionRad/M_PI) * 180 ;

printf("Angle Of Incidence: %f degrees\nIndex Of Refraction: %f\nAngle of Refraction: %f degrees\n", angleOfIncidence, indexOfRefraction, angleOfRefraction) ;

return 0;
}
