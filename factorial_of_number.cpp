//factorial of element 
#include<stdio.h>
int main()
{
	int i,n ;
	int fac =1;
	printf("ENTER n \n");
	//input value of n
	scanf("%d",&n);
	for(i=1;i<=n;i++)//looping
	{
	   fac=fac*i;	
	}
	printf("fac = %d\n",fac);
	
}