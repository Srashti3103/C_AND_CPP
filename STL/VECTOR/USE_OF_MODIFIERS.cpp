//C++ PROGRAM TO ILLUSTRATE THE MODIFIERS IN VECTOR 
#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&v){
	for(auto &i:v)
	cout<<i<<" ";
	cout<<endl;
}
int main(){
	vector<int> v1{1,2,3,4};
	vector<int> v2{5,6,7};
	print(v1);
	print(v2);
	v1.swap(v2);
	cout<<"AFTER SWAPPIING"<<endl;
	print(v1);
	print(v2);
	vector<int>v3=v1;
	cout<<"COPY ELEMENTS OF v1:";
	print(v3); 
}