//DYNAMIC INPUT AND PRINT N NUMBERS
//calloc --->>>default value zero
#include<stdio.h>
#include<malloc.h>
int main(){
	int *a,i,n;
	printf("ENTER SIZE \n");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	//create n size of array in run time
	printf("ENTER NUMBER \n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	free(a);
}