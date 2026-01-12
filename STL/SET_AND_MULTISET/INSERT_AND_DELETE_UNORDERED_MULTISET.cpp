//CPP PROGRAM INSERT AND DELETE IN MULTISET 
#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_multiset<int>s;
	s.insert(12);
	s.insert(10); 
	s.insert(2);
	s.insert(10);//duplicate added
	s.insert(90);
	s.insert(85);
	s.insert(45);
	//multiset<int>::iterator it1,it2;
	cout<<"MULTISET ELEMENTS AFTER SORT\n";
	for(auto it= s.begin(); it!=s.end();it++)
	cout<<*it<<' ';
	cout<<endl;
	auto it1 = s.find(10);
	auto it2 = s.find(90);
	//elements from 10 to element before 90 erased 
	s.erase(it1,it2);
	cout<<"MULTISET ELEMENT AFTER ERASE \n";
	for(auto it= s.begin(); it!=s.end();it++)
	cout<<*it<<' ';	
}