#include<stdio.h>
#include<math.h>
int main(){
	float x,c;
	printf("Enter x\n");
	scanf("%f",&x);
	c = pow ( x , 3 ) - 4 * x + 5;
	printf("ans=%f\n",c);
}