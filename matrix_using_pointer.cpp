//input and print matrix using pointer 
#include<stdio.h>
int main(){
	int a[10][10],m,n;
	int *p;
	printf("ENTER ROW AND COLOUMN \n");
	scanf("%d%d",&m,&n);
	printf("ENTER ELEMENTS OF MATRIX \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",(p+j));
		}
	}
	printf("MATRIX A \n");
	for(int i=0;i<m;i++){
		p=a[i];
		for(int j=0;j<n;j++){
		printf("%4d",*(p+j));	
		}
		printf("\n");
	}
}