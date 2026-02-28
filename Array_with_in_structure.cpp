//Array with in structure
#include<stdio.h>
struct student
{
	char name[10];
	int roll;
	int m[3];
	float s, p ;
}a;
int main()
{
	
	int j;
	printf("ENTER NAME AND ROLL \n");
	scanf("%s%d",a.name,&a.roll);
	a.s= 0;
	for(j=0;j<3;j++)
	{
		printf("ENTER MARKS \n");
		scanf("%d",&a.m[j]);
		a.s = a.s + a.m[j];
	
	}
	a.p = a.s/3;
	printf("NAME =%s \n", a.name);
	printf("ROLL NO. %d\n",a.roll);
	printf("TOTAL NO. %d\n",a.s);
	printf("AVERAGE %d\n",a.p);
	printf("size of student = %d \n",size(struct student));	
}