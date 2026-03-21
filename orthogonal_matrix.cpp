//ORTHOGONAL MATRIX 
#include<stdio.h>
int main(){
	int a[10][10],b[10][10],c[10][10],d[10][10],m,n,i,j,k,count;
	printf("ENTER THE NUMBER OF ROWS AND COLOUMNS OF MATRIX A \n");
	scanf("%d%d",&m,&n);
	if(m!=n){
		printf("mtrix must be square to orthogonality \n");
		return 0;
	}
	printf("ENTER THE MATRIX \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);  
		}
	}
	printf("Trnaspose of a matrix:\n");
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				b[j][i]=a[i][j];
				printf("%d ",b[j][i]);
			}
			printf("\n");
		}
		printf("Identity Matrix :\n");
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
			if(i==j){
				c[i][j]=1;
			}else{
				c[i][j]=0;
				}
				printf("%d ",c[i][j]);
			}
			printf("\n");	
		}
		printf("Inverse of a matrix:\n");
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				d[i][j]=0;
				for(int k=0;k<n;k++){
					d[i][j]=d[i][j]+a[i][k]*b[k][j];
					}
					printf("%d ",d[i][j]);	
				}
				printf("\n");
			}
		count=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(d[i][j]==c[i][j])
				count++;
				}
			}
			if(count==m*n){
			printf("it is an orthogonal matrix \n");
			}else{
			printf("it is not an orthogonal matrix \n");
			}
			return 0;
}