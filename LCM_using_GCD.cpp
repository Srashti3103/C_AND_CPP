//write a program to find LCM using GCD
#include<stdio.h>
int main ()
{
    //intialization
    int n1, n2, gcd ,lcm , min ,i;
    //input two positive number
    printf("Enter two positive number n1 and n2 :");
    scanf("%d%d",&n1,&n2);
    //min number using in condition of loop
    min = (n1<n2)?n1:n2;
    //loop for finding gcd
    for(i=1;i<=min;i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
        
     }
     //formula for finding lcm using gcd 
     //n1*n2=lcm*gcd
     lcm=(n1*n2)/gcd;
     //print lcm of thesse two positive number
     printf("The lcm of %d and %d is %d\n",n1,n2,lcm);
     //print gcd of these two positive number
     printf("the gcd of %d and %d is %d\n",n1,n2,gcd);
}