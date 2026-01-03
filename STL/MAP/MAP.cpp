//MAP
#include<iostream>
#include<map>
using namespace std;
void print(auto &m){
	cout<<"SIZE OF MAP :"<<m.size()<<endl;
	for(auto &i:m)
	cout<<i.first<<" "<<i.second<<endl;
}
int main(){
	map<int,string>m;
	m[1]="one";//trees
	m[3]="three";
	m[2]="two";
	m.insert({4,"four"});
	//mao<int,string>::iterator it ;
	for(auto it=m.begin();it!=m.end();it++){{
	}
	cout<<"Key:"<<it->first<<",Value:"<<it->second<<endl;
	}
	cout<<"another way "<<endl;
	m[5];
	print(m);
	m[3]="abc";
	print(m);
	auto it = m.find(5);
	if(it!=m.end())
	m.erase(it);
	print(m);
	m.clear();
	print(m);
}