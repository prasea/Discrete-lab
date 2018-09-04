#include <stdio.h>
#include <conio.h>
float factorial(int a)
{
	float fact=1;
	for(int i=1;i<=a;i++)
	fact=fact*i;
	return fact;
}
int main()
{
	int n,r;
	float comb,per;
	printf("Enter the value of n and r");
	scanf("%d%d",&n,&r);
	int a=n-r;
	printf("The factorial of %d is %f",n,factorial(n));
	printf("\nThe factorial of %d  is %f",(a),factorial(a));
	printf("\nThe factorial of %d is %f",r,factorial(r));
	comb=factorial(n)/((factorial(a))*(factorial(r)));
	printf("\nThe combination is %f ",comb);
				
}
