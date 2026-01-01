#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>a{1,2,3,4,5};
	//vector<int>::iterator it; //declare iterator
	cout<<"OUTPUT OF BEGIN AND END:";
	for(auto i =a.begin();i!=a.end();++i)
	cout<<*i<<" ";
	//for(it=a.begin();it!=a.end();++i)
	//cout<<*it<<" ";
	cout<<"\nOUTPUT OF RBEGIN AND REND:";
	for(auto ir = a.rbegin();ir!= a.rend();++ir)
	cout<<*ir<<" ";
}