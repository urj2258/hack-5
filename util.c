#include "util.h"
#include<stdio.h>
#include<math.h>

double degreesToRadians(double degree){
   
    return degree*3.14/180;

}

double getAirDistance(double originLatitude,double originlongitude,
double destinationLatitude,double destinationLongitude)
{
    double earthR=6371.0;

    originLatitude = degreesToRadians(originLatitude);
    originlongitude = degreesToRadians(originlongitude);
    destinationLatitude = degreesToRadians(destinationLatitude);
    destinationLongitude = degreesToRadians(destinationLongitude);
