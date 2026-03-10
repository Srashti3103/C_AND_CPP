//FIBONACCI SERIES
#include<stdio.h>
int main()
{
	//initialization
	int num,a=0,b=1,c;//fibonacci intialize from 0
	//input the value of num
	printf("Enter the vakue of num :\n");
	scanf("%d",&num);
	printf("%4d%4d",a,b);
	//looping
	for(int i=1;i<=num-1;i++){
		c=a+b;
		printf("%4d",c);
		a=b;
		b=c;
	}
}