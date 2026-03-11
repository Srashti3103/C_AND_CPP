//INPUT RECORD AND SEARCH 
#include<stdio.h>
struct student{
	char name[10];
	int roll;
}a[10];
int main(){
		int n,x,t;
		printf("ENTER NUMBER OF RECORDS:\n");
		scanf("%d",&n);
		for(int i=0;i<n;i++){
		printf("ENTER NAME AND ROLL NUMBER :\n");
		scanf("%s%d",a[i].name,&a[i].roll);
		}
		
		printf("ENTER THE ROLL TO SEARCHED:\n");
		scanf("%d",&x);
		for(int i=0;i<n;i++){
			if(a[i].roll==x){
				printf("NAME = %s\n",a[i].name);
				printf("ROLL NUMBER = %d\n",a[i].roll);
				t=1;break;
			}
		}
}