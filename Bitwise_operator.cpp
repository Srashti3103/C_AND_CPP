//bitwise operator
#include<stdio.h>
int main ()
{ 
int i=3, j=4;
if(i++>j &&  j++>i)
 {
 	i=10 ;
 	j=20;
 	 printf("%d\n",i);
 	 printf("%d\n",j);
	 } 
if(i++>j &  j++>i)
 {
 	i=10 ;
 	j=20;
 	 printf("%d\n",i);
 	 printf("%d\n",j);
	 
 }
 if(i++>j || j++>i)
 {
 	i=10 ;
 	j=20;
 	 printf("%d\n",i);
 	 printf("%d\n",j);
 }
  if (i++>j | j++>i)
 {
 	i=10 ;
 	j=20;
 	 printf("%d\n",i);
 	 printf("%d\n",j);
 }
 }
 