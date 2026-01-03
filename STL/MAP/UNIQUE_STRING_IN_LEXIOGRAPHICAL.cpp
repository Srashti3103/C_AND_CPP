//GIVEN N STRINGS , PRINT UNIQUE STRINGS IN LEXIOGRAPHICAL ORDER WITH HTEIR FREQUENCY .
//N<=10^5     |s|<=100
#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string,int>m;
	int n;
	cout<<"ENTER n"<<endl;
	cin>>n;
	cout<<"ENTER NAME"<<endl;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		m[s]=m[s]+1;
	}
	for(auto &i:m)
	cout<<i.first<<" "<<i.second<<endl;	
}