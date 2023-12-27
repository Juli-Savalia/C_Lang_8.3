// Write a Program to perform the addition operation of two 2D arrays & store it in another array. Keep in mind that both array sizes must be the same.

#include<stdio.h>
void main()
{
	int n;
	printf("Enter the size of an array:-");
	scanf("%d",&n);
	
	printf("Enter array A's elements:\n");
	int a[n][n],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)//printing a matrix
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	printf("Enter array B's elements:\n");
	int b[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",b[i][j]);
		}
	}
	for(i=0;i<n;i++)//printing a matrix
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
//	summation

	printf("\n\n");
	
	printf("Summation of A and B both elements are:\n");
	int c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c=a[i][j]+b[i][j];
			printf("%d ",c);
		}
		printf("\n");	
	}
}

