//GIVEN N STRINGS PRINT UNIQUE STRING IN LEXIOGRAPHICAL ORDER 
#include<bits/stdc++.h>
using namespace std;
int main(){
	set<string>s;
	int n=4;
	string x;
	cout<<"ENTER NAME"<<endl;
	for(int i=0;i<n;i++){
		cin>>x;
		s.insert(x);
 	}
 	cout<<"STRING IN LEXIOGRAPHICAL ORDER :"<<endl;
 	for(auto it:s)
 	cout<<it<<endl;
}