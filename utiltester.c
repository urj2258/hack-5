#include"util.h"
#include<stdio.h>

int main()
{
    double a=45.0;

     printf("Testing degrees to radians:");
    printf("\nInput:%f degrees\n",a);
      printf("expected output:%f radians\n",degreesToRadians(a));
    printf("Actual output:%f radians\n",degreesToRadians(a));