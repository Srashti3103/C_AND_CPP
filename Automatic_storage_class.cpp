//Automatic(LOCAL)Storage class
//Keyword --->>>Auto 
//Scope---->>>Local
//Memory---->>>RAM
//Default value--->>>Garbage value
#include<stdio.h>
int main(){
	auto int a=3;//invalid
	printf("%d\n",a);
	{
	    auto int b=5;//invalid 
		printf("%d\n",a);
		printf("%d\n",b);
    }
    printf("%d\n",a);
    printf("%d\n",b);//undefined b 
}
//Register storage class
//keyword--->>>register
//Scope---->>>Local
//Memory---->>>CPU-REGISTER
//Default value--->>>Garbage value
