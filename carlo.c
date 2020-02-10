#include <stdio.h>
#include<stdlib.h>

#define SEED 35791246

int main() {
	int i,n,CirCount=0;
	double X,Y,Z,PI;
	
	srand(SEED);
	
	printf("Iteration: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		X=(double)rand()/(double)RAND_MAX;
		Y=(double)rand()/(double)RAND_MAX;
		//printf("%lf %lf",X,Y);
		
		Z=X*X+Y*Y;
		
		if(Z<=1){
			CirCount++;
			//printf(" %d ",CirCount);
		}	
	}
	
	PI=4*((double)CirCount/(double)n);
	
	printf("%lf",PI);
	return 0;
}
