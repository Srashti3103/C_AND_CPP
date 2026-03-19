//NO ARGUMENT BUT RETURN VALUE
//SUM OF TWO NUMBER 
#include<stdio.h>
int sum(){
	int a,b,c;
	printf("ENTER THE VALUE OF a AND b:\n");
	scanf("%d%d",&a,&b);//input
	c=a+b;//calculation
	return c;
}

int main(){
	int t;
	t=sum();//function calling
	printf("SUM =%d",t);//print
	
}