#include<iostream>
#include<set>
using namespace std;
int main(){
	//set declaration
	set<int>myset{1,2,3,4,5};
	set<int>::iterator it1,it2;
	//defining it1 pointing to hte first 
	//element and it2 to the last element 
	it1 = myset.begin();
	it2 = myset.end();
	//decrementing the it2 two times
	it2--;
	it2--;
	//erasing elements within the range 
	//of it1 and it2
	myset.erase(it1,it2);
	//printing the set
	for(auto it = myset.begin();it!=myset.end(); ++it)
	cout<<' '<<*it;
	return 0;
}