//POINTER TO OBJECT 
//INPUT AND PRINT TWO NUMBERS
#include<iostream>
using namespace std;
class test{
	private: int a , b;
	public: void get(){
		cout<<"ENTER TWO NUMBER"<<endl;
		cin>>a>>b;
	}
	void out(){
		cout<<a<<endl<<b<<endl;
	}
};
//REFERENCE OBJECT 
int main(){
	test t;
	test &u=t;
	u.get();
	u.out();
}