//SORT IN STL
//IntroSort---->>>>QUICKSORT+HEAPSORT+INSERTIONSORT
//PROTOTYPE FOR SORT ----->>> sort(startaddress,endaddress)
#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	int a[]={10,56,20,15,7};
	int n=5;
	sort(a,a+n);
	print(a,n);
	sort(a+2,a+n);
	print(a,n);
	sort(a+1,a+3);
	print(a,n);
	cout<<"decending order"<<endl;
	sort(a,a+n,greater<int>());
	print(a,n);
}