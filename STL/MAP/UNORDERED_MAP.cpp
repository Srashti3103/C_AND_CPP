//UNORDERED MAP
#include<bits/stdc++.h>
using namespace std;
void print(auto &m){
	cout<<"SIZE OF MAP :"<<m.size()<<endl;
	for(auto &i:m)
	cout<<i.first<<" "<<i.second<<endl;
}
int main(){
	unordered_map<int,string>m;
	m[1]="one";//red black trees
	m[3]="three";
	m[2]="two";
	print(m);
	
	
}