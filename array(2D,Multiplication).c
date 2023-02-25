#include<stdio.h>
int main()
{
	int mat1[100][100];
	int mat2[100][100];
	int mat3[100][100];
	int i,j,num,row1,row2,row3,col1,col2,col3,w,k;
	printf("Enter the total no. row in First MATRIX ");
	scanf("%d",&row1);
	printf("Enter the total no. of column in First MATRIX");
	scanf("%d",&col1);
	printf("Enter the elements in first matrix \n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("The first Matrix is-\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%d ",mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the total no. row in Second MATRIX ");
	scanf("%d",&row2);
	printf("Enter the total no. of column in Second MATRIX");
	scanf("%d",&col2);
	printf("Enter the elements in Second matrix \n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("The Second Matrix is-\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("%d ",mat2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{
			if(col1==row2)
			{
				
				for(k=0;k<col1;k++)
				{
				mat3[i][j]+=(mat1[i][k]*mat2[k][j]);
				}
			}
			else
			{
				w=1;
			}
			
		}
	}

	if(w==1)
	{
		printf("The condition is not satisfied for matrix multiplication");
	}
	else
	{
		printf("The multiplication of  the  given two matrix is \n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("%d ",mat3[i][j]);
		}
		printf("\n");
	}
	
	}
	
	return 0;
}
