//to check given matrix is identity or not 
#include<stdio.h>
int main ()
{
	int a[10][10],b[10][10],m,n,count;
	printf("ENTER ROW AND COLOUMN \n");
	scanf("%d%d",&m,&n);
	printf("ENTER MATRIX ELEMENTS \n");
	for(int i=0; i<m ; i++)
	{
		for(int j=0 ; j<n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n; j++)
		{
			if(i==j)
			b[i][j]=1;
			else
			b[i][j]=0;
		}
	}
	for(int i=0 ; i<m; i++)
	{
		for(int j=0; j<n ; j++)
		{
			if(a[i][j]==b[i][j])
			{
			count++;
			}
		}
	}
		if(count ==m*n)
		printf("IDENTITY MATRIX ");
		else
		printf("NOT IDENTITY MATRIX ");
}