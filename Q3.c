#include<stdio.h>

void main()
{
	int j,i,r,c,sum=0;
	
	printf("Enter the size of row :-");
	scanf("%d",&r);
	printf("Enter the size of column :-");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}	
	printf("The sum of diagonal elements are: %d",sum);
}

