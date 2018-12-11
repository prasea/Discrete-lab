#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) (x*x-4*x-10)
#define g(x) (2*x-4)
#define E 0.00001

int main()
{
	float x0,x1,ecal;
here:printf("Enter the initial guess");
	scanf("%f",&x0);
	if(g(x0==0))
	goto here;
	do
	{
		if(g(x0)==0)
		{
			printf("The root doesnot converge and exist");
			exit(0);
		}
	else 
	{
		x1=x0-(f(x0)/g(x0));	
	}
		ecal=fabs((x1-x0)/x1);
		x0=x1;
	}
	while(ecal>E);
	printf("The root id %f",x1);
	return 0;
    
	
}
