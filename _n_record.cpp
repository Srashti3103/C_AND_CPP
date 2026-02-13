//INPUT N RECORD AND SORT N RECORD
#include<stdio.h>

struct student{
	char name[10];
	int roll;
}a[10],t;
int main(){
	int n;
	printf("ENTER NUMBER OF RECORDS:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("ENTER NAME AND ROLL NUMBER :\n");
		scanf("%s%d",a[i].name,&a[i].roll);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
	printf("NAME AND ROLL NUMBER\n");
	for(int i=0;i<n;i++){
		printf("%s%d\n",a[i].name,a[i].roll);
	}
}
