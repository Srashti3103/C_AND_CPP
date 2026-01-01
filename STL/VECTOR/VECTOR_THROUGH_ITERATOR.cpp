//ITERATOR
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v{1,2,3,4,5};
	vector<int>::iterator it;//DECLARE ITERATOR
	//intialize the iterator with the first element 
	it = v.begin();
	//print the vector element 
	cout<<"v[0]="<<*it<<endl;
	//iterator points to the 3rd element 
	it=v.begin()+2;
	cout<<"v[2]="<<*it<<endl;
	//iterator points to the last element 
	it = v.end()-1;	
	cout<<"v[4]="<<*it<<endl;
}