//ARGUMENT AND RETURN VALUE
//FACTORIAL
#include<stdio.h>
int fact(int p);
int main(){
	int n;
	printf("ENTER THE NUMBER :");
	scanf("%d",&n);
	printf("FACTORIAL OF A NUMBER :%d",fact(n));
}
int fact(int p){
	int f=1;
	for(int i=1;i<=p;i++){
		f=f*i;
	}
	return (f);}
