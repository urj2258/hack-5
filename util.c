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

 double dl=destinationLongitude-originlongitude;

    double distance=acos(sin(originLatitude)*sin(destinationLatitude)+cos(originLatitude)*cos(destinationLatitude)*cos(dl))*earthR;

    return distance;
}

double lorentzTimeDilation(double t,double percentC)
{
    double speedOfLight=299792458.0;
    double fracC=percentC/100.0;  
    double dilatedTime=t/sqrt(1-pow(fracC,2)/pow(speedOfLight,2));


    return dilatedTime;
}