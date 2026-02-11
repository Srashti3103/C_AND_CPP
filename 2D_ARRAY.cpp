// 2D array --->>>> in this 2 D array print N names 
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10][40];
	int i, n;
	printf("Enter size \n");
	scanf("%d",&n);
	printf("Enter names \n");
	for(i=0; i<n; i++)
	{
		scanf("%s",a[i]);
	}
	printf(" NAME = \n");
	for(i=0;i<n;i++)
	{
		printf(" %s \n ", a[i]);
	}}