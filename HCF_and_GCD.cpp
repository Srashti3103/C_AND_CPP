//highest common factor and greatest common divisor
#include<stdio.h>
int main()
{
    //intialization
    int n1 ,n2, gcd;
    //input two positive number 
    printf("Enter two positive number:");
    scanf("%d%d",&n1,&n2);
    //loop for finding gcd or hcf
    for(int i=1;(i<=n1 && i<=n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
        
    }
    //print GCD of these number
    printf("GCD of %d and %d is %d",n1,n2,gcd);

}