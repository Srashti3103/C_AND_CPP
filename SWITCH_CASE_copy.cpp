//switch case statement
#include<stdio.h>
int main()
{
	int n;
	printf("Enter Choicce (1 - 7) \n");
	scanf("%d",&n);
	switch(n)
	
	{
		case 1 : printf(" MONDAY ");
		break;
		
		case 2 : printf(" TUESDAY ");
		break;
		
		case 3 : printf(" WEDNESDAY ");
		break;
		
		case 4 : printf(" THURSDAY ");
		break;
		
		case 5 : printf(" FRIDAY ");
		break;
		
		case 6 : printf(" SATERDAY ");
		break;
		
		case 7 : printf(" SUNDAY ");
		break;
		
		Default : printf(" INVALID CHOICE \n");
		 
	}
}