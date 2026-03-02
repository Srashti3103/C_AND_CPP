//ARRAY WITHIN STRUCTURE AND ARRAYH OF STRUCTURE 
#include<stdio.h>
struct student{
	char name[10];
	int roll_no;
	int marks[3];
};
struct student a[10];
int main(){
	int n,i,j;
	printf("ENTER THE NUMBER OF STUDENT :\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("NAME AND ROLL NUMBER  OF STUDENT :\n");
		scanf("%s%d",a[i].name,&a[i].roll_no);
	    printf("MARKS OF THREE SUBJECT :\n");
	    for(j=0;j<3;j++){
		scanf("%d",&a[i].marks[j]);
		}
	}
	for(i=0;i<n;i++){
		printf("NAME OF STUDENT :%s\n",a[i].name);
		printf("ROLL NO OF STUDENT :%d\n",a[i].roll_no);
		for(int j=0;j<3;j++){
		printf("MARKS OF STUDENT :%d\n",a[i].marks[j]);}
	}
}