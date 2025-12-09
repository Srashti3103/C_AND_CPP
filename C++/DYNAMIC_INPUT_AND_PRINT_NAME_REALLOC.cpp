//DYNAMIC INPUT AND PRINT NAME
//REALLOC---->>>reallocatiom=n of memory 
#include<stdio.h>
#include<malloc.h>
int main(){
	int n;
	char *a;
	printf("ENTER SIZE \n");
	scanf("%d",&n);
	a=(char*)malloc((n+1)*sizeof(char));
	printf("ENTER NAME \n");
	scanf("%s",a);
	printf("a=%s\n",a);
	printf("ENTER NEW SIZE\n");
	scanf("%d",&n);
	a=(char*)realloc(a,(n+1));
	printf("ENTER NAME \n");
	scanf("%s",a);
	printf("a=%s\n",a);
	free(a);
}