//write a program to fimd least common multiple (LCM)
#include<stdio.h>
int main()
{
    //intializiation 
	int n1 , n2 , max;
    //input two positive number
	printf("Enter two positive number  n1 and n2 :");
	scanf("%d%d", &n1 , &n2);
    //for intializing max number 
	max= ( n1 > n2 ) ? n1 : n2 ;
	while(1)//infinity loop
    {
        //conditon for  finding least common multiple
	if(max % n1 == 0 && max % n2 == 0){
		printf("LCM of %d and %d is %d",n1,n2,max);
		break;
	}
	max++;
}

}