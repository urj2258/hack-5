#include"util.h"
#include<stdio.h>

int main()
{
    double a=45.0;

     printf("degrees to radians:");
    printf("\nInput:%f degrees\n",a);
      printf("expected output:%f radians\n",degreesToRadians(a));
    printf("Actual output:%f radians\n",degreesToRadians(a));

    if(degreesToRadians(a)== 0.785)
    {
        printf("test passed!");
    }
    else{
        printf("test failed!");
    }

    double lat1=37.7749,lon1=-122.4194,lat2=34.0522,lon2=-118.2437;
     printf("testing A.D:");

    printf("input:(%f,%f) to (%f,%f)\n",lat1, lon1, lat2, lon2);
    printf("Expected Output: %f km\n", getAirDistance(lat1, lon1, lat2, lon2));
    printf("Actual Output: %f km\n", getAirDistance(lat1, lon1, lat2, lon2));

 if(getAirDistance(lat1,lon1,lat2,lon2)==559.0567)//this was also taken from google i dont know if its correct
    {
        printf("test passed!");
    }
    else 
    {
        printf("test failed!");
    }

 double t1=1.0,s1=10.0;
    printf("testing lorentztimedilation:");
    printf("Input: t = %f, percentC = %f\n", t1, s1);
    printf("Expected Output: %f\n", lorentzTimeDilation(t1, s1));
    printf("Actual Output: %f\n", lorentzTimeDilation(t1, s1));

     if(lorentzTimeDilation(t1,s1)==1.0000000007)
    {
        printf("test passed");
    }
    else 
    {
        printf("test failed");
    }

    return 0;
}