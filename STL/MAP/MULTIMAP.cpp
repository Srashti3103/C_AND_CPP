//MULTIMAP-->>> DUPLICATE KEY VALUE
#include<bits/stdc++.h>
using namespace std;
int main(){
	multimap<int,string> m;
	m.insert({1,"one"});
	m.insert({3,"three"});
	m.insert({2,"two"});
	m.insert({2,"nine"});//duplicate keys allowed 
	//multimap does not support [], the only way of inser is in this code
	for(auto &i:m)
	cout<<i.first<<" "<<i.second<<endl;
	
}