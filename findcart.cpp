#include <stdio.h>
#include <conio.h>
#define Max 100
void findcart(int arr1[],int arr2[],int n,int n1)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n1;j++)
			printf("{%d,%d},",arr1[i],arr2[j]);
}

int main()
{
	int n1,n2;
	int arr1[Max];
	int arr2[Max];
	printf("Enter  the size of first set");
	scanf("%d",&n1);
	printf("\n Enter elements");
	for(int i=0;i<n1;i++)
	scanf("%d",&arr1[i]);
	
	printf("\n Enter the size of second set");
	scanf("%d",&n2);
	printf("\nEnter the elements of second set");
	for(int j=0;j<n2;j++)
	scanf("%d",&arr2[j]);
	findcart(arr1,arr2,n1,n2);
	getch();
	return 0;
}
