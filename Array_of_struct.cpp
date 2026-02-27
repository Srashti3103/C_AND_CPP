//Array of structure 
//Input and print n  records
#include<stdio.h>
struct student{
	char name[10];
	int roll_no;
};
struct student a[10];
int main(){
	int n;
	printf("Enter the number of record :\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Name and roll_no :\n");
		scanf("%s%d",a[i].name,&a[i].roll_no);
	}
	for(int i=0;i<n;i++){
		printf("NAme of student : %s\n",a[i].name);
		printf("Roll number of student : %d\n",a[i].roll_no);
	}
	
}