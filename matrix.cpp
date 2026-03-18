// print a motrix (2D - ARRAY )
#include<stdio.h>
int main()
{
	int a[10][10], m, n;
	printf("ENTER THE ROW AND COLOUMN : \n");
	scanf("%d%d",&m , &n);
	printf("ENTER THE MATRIX ELEMENT \n ");
	//input elements  
	for (int i=0 ; i<m ; i++)//for row 
	{
		for (int j=0 ; j<n; j++)//for coloumn 
		{
			
			scanf("%d",&a[i][j]);
		}
	}
//print array 
printf("MATRIX \n");
for (int i=0 ; i<m; i++)
{
	for (int j=0; j<n; j++)
	{
		printf(" %4d",a[i][j]);
	}
	printf("\n");
}
}
