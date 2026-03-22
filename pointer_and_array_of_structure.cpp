//POINTER  AND  ARRAY  OF  STRUCTURE   
#include<stdio.h>  
struct student{  
    char name[10];  
    int roll;
	};  
   int main(){  
   struct  student  a[10] , *p;       
   int n ;  
   printf(" ENTER NO. OF  RECORDS \n ");  
   scanf("%d", &n);  
   for(  p = a ; p < (a+n) ; p++ ){   
   printf(" ENTER NAME AND ROLL \n " );    
   scanf("%s%d", p -> name, &p -> roll);  
}
     for(p=a;p<(a+n);p++) {
     printf(" NAME = %s \n " , p->name) ;  
      printf(" ROLL   = %d \n " , p->roll) ; 
}
}