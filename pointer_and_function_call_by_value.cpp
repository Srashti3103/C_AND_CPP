//POINTER AND FUNCTION 
//PASSING ARGUMENT 
//1.CALL BY VALUE
//2.CALL BY ADDRESS OR POINTER 
//3.CALL BY VALUE REFERENCE(ONLY IN C++)



//1.CALL BY VALUE
#include<stdio.h>
void swap(int p,int q);
int main(){
	int a=5,b=2;
	swap(a,b);//value
	printf("AFTER SWAP\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}


void swap(int p,int q){
	int c;
	c=p;
	p=q;
	q=c;
}