//to Explain float format specifier
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter  values :\n");
	scanf("%f%f",&a,&b);
/*	printf("Enter a value:\n");
	scanf("%f",&a);
	printf("Enter a value:\n");
	scanf("%f",&b);
	*/
	c=a/b;
	printf("a= %f\n",a);
	printf("b= %f\n",b);
	printf("div= %f\n",c);
	
}