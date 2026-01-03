//GIVEN N STRING AND Q QUUERIES IN EACH QUERY GIVEN A STRING PRINT FREQUENCY OF THAT STRINGA n<=10^6 , q<=10^6 , |s| <= 100
#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<string,int>m;
	int n;
	string s;
	cout<<"ENTER n"<<endl;
	cin>>n;
	cout<<"ENTER STRING"<<endl;
	for(int i=0;i<n;i++){
		cin>>s;
		m[s]++;
	}
	int q;
	cout<<"ENTER QUERRY"<<endl;
	cin>>q;
	while(q--){
		cout<<"ENTER STRING"<<endl;
		cin>>s;
		cout<<m[s]<<endl;
	}
}