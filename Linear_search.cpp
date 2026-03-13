#include<stdio.h>
#include<string.h>
int main()
{
	char a[10][40], x[40];
	int i, n , f =0 ;
	printf("ENTER SIZE \n ");
	scanf("%d",&n);
	printf("ENTER NAME \n");
	for(i = 0 ; i<n ; i++)
	{
		scanf("%s",a[i]);
	}
	printf("ENTER NSME TO BE SEARCHED \n");
	scanf("%s",x);
	for(i=0 ; i<n ; i++)
	{
		
		if(strcmp(a[i],x)== 0)
		{
			printf("FOUND AND POSITION = %d \n", i+1);
			f=1 ; break;
		}
	}
	    if
			(f==0 ){
			printf( " NOT FOUND ");
		}	
}