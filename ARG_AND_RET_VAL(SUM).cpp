//ARGUMENT AND RETURN VALUE 
//ADD TWO NUMBER 
#include<stdio.h>
int sum(int p,int q);//declaration
int main(){
	int a,b;
	printf("ENTER THE VALUE OF A AND B");
	scanf("%d%d",&a,&b);//input
	printf("SUM =%d",sum(a,b));//calling
}
int sum(int p,int q){//argument
	return p+q;//return
	}