//Input and print matrix 
#include<stdio.h>
int main(){
	int a[10][10],m,n;
	printf("ENTER ROW AND COLOUMN \n");
	scanf("%d%d",&m,&n);
	printf("ENTER MATRIX ELEMENTS \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",*(a+i)+j);
		}
	}
	printf("MATRIX A\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%4d",*(*(a+i)+j));
		}
		printf("\n");
	}
	
}