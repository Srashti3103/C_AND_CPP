//print array 
#include<stdio.h>
int main()
{
	int n ;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array :");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
    }
    printf("array :");
    for(int i=0; i<n; i++)
    {
    	printf("%d\n",arr[i]);
	}
	
}
