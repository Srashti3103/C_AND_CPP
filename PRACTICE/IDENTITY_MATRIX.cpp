//create identity matrix and print matrix
#include<stdio.h>
#include<string.h>
int main(){
	char a[10][10];
	int m,n;
	printf("ENTER NUMBER OF ROW AND COLOUMN : \n");
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				a[i][j]=1;
			}else{
				a[i][j]=0;
			}
		}
	}
	printf("IDENTITY MATRIXX :\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	
}