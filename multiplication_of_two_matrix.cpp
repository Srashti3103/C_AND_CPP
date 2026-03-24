//Multiplication two matrix
#include<stdio.h>
int main(){
	int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;
	printf("ENTER THE NUMBER  ROWS AND COLOUMNS FOR a \n");
	scanf("%d%d",&m,&n);
	printf("ENTER THE NUMBER ROWS AND COLOUMNS FOR b  \n");
	scanf("%d%d",&p,&q);
	if(n!=p){
		printf("MULTIPLICATION IS NOT POSSIBLE \n");
	}else{
		printf("ENTER THE MATRIX a \n");{
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
				}
			}
 		}
 		printf("ENTER THE MATRIX b \n");
 		for( i=0;i<p;i++){
 			for( j=0;j<q;j++){
 				scanf("%d",&b[i][j]);
			 }
		 }
	}
	c[i][j]=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for( k=0;k<n;k++){
			c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	printf("MULTIPLICATION OF TWO MATRIX IS \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%4d",&c[i][j]);
		}
		printf("\n");
	}
}