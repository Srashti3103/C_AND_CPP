//structure within array
#include<stdio.h>
struct student{
	char name[10];
	int roll_no;
	int marks[3];
	int sum;
	float avg;};
struct student a;
int main(){
	printf("ENTER THE NAME AND ROLL NO. OF STUDENT :\n");
	scanf("%s%d",a.name,&a.roll_no);
	a.sum=0;
	for(int i=0;i<3;i++){
		printf("ENTER THE MARKS :");
		scanf("%d",&a.marks[i]);
		a.sum=a.sum+a.marks[i];
	}
	a.avg=a.sum/3;
	printf("NAME OF STUDENT : %s\n",a.name);
	printf("ROLL NUMBER OF STUDENT : %d\n",a.roll_no);
	printf("TOTAL MARKS OF STUDENT :%d\n",a.sum);
	printf("AVERAGE OF MARKS OF STUDENT : %f\n",a.avg);
}