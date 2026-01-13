//GIQUERIES IN EACH QUERY YOU ARE GIVEN A STRING YES IF STRING IS PRESENT ELSE PRINT NO.
//N<=10^6; |s|<=100,Q<=10^6
#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_set<string>s;
	string x;
	int n=4,q;
	cout<<"ENTER NAME "<<endl;
	for(int i=0;i<n;i++){
		cin>>x;
		s.insert(x);//o(1)
	}
	cout<<"ENTER QUERY:"<<endl;
	cin>>q;
	while(q--)
	{
		cout<<"ENTER NAME "<<endl;
		cin>>x;
		if(s.find(x)==s.end())//o(1)in set o(logn)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
}