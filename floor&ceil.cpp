#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float a;
	printf("Enter the value of a");
	scanf("%f",&a);
	printf("The floor value of %0.2f is %0.2f",a,floor(a));
	printf("\nThe celing value of %0.2f is %0.2f",a,ceil(a));
	return 0;
}
