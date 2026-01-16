//To explain difference without external storage class
//#include<stdio.h>
//int a=3;
//void fun();
//int main(){
//	printf("%d\n",a);
//	fun();
//}
//void fun(){
//	printf("%d\n",a);
//}


#include<stdio.h>
void fun();
int main(){
	int a;
	printf("%d\n",a);
	fun();
}
int a=3;
void fun(){
	printf("%d\n",a);
}