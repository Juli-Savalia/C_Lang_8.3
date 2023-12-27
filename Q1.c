// Write a Program to find the average of a 1D array.

#include<stdio.h>

void main()
{
	int n;
	printf("Enter the size of an array =");
	scanf("%d",&n);
	
	int a[n][n];
	printf("Enter the elements of an array:- \n");
	
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
			sum = sum+a[i][j];	
		}
	}
	
	float avg = sum/n;
	printf("your average is = %f",avg);
}
