/*
By counting the total points as TOT and the subset of those points that are within the circle as 
IN, by doing the division (IN/TOT)*4 we can actually approximate with this experiment the value of pi.
In our case, n is TOT & count is IN.
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
//#define SEED 35791246
#include <time.h>

int main(int argc, char* argv)
{
   int n = 0;
   double x,y;
   int i,count=0; /* # of points in the 1st quadrant of unit circle */
   double z;
   double pi;

   printf("Enter the number of iterations used to estimate pi: ");
   scanf("%d",&n);

   /* initialize random numbers */
//   srand(SEED);
 	srand(time(0));	
   count=0;
   for ( i=0; i<n; i++) 
   {
      x = (double)rand()/RAND_MAX;
      y = (double)rand()/RAND_MAX;
      z = x*x+y*y; //If z <= 1, the point lies within the circle
      if (z<=1) count++;
    }
   pi=(double)count/n*4;
   printf("# of trials= %d , estimate of pi is %g \n",n,pi);
   return 0;
}
