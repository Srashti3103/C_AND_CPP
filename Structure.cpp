//user define data type structure
#include<stdio.h>
struct student{
	char name[10];
	int roll_no;};
int main(){
	struct student a;
	printf("ENTER THE NAME AND ROLL NO. OF STUDENT :");
	scanf("%s%d",a.name,&a.roll_no);
	printf("NAME = %s\n",a.name);
	printf("ROLL NO. = %d\n",a.roll_no);
	printf("SIZE OF A STRUCTURE =%d\n",sizeof(struct student));	
}