//EG of break statement 
#include<stdio.h>
int main()
{
	//intialization
	int num,rem = 1;
	//input number
	printf("Enter a number:");
	scanf("%d",&num);
	//looping statement
	for(int i=2; i<=num-1;i++){
		rem = num%i;


		
		if(rem==0)
		{
			break;//brak statement
		}
	}
		if(rem !=0)
		{
			printf("Number is PRIME \n");
		}
		else
		{
			printf("Number is not PROME or COMPOSITE ");
		}
	}
	
