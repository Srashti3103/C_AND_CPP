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
//POINTER TO OBJECT 
int main(){
	test t;
	test *p;//DECLARATION
	p=&t;//INTIALIZATION
	p->get();
	p->out();
}
////DYNAMIC OBJECT 
//int main(){
//	test *p;
//	p=new test;
//	p->get();
//	p->out();
//	delete p;
//}
////REFERENCE OBJECT 
//int main(){
//	test t;
//	test &u=t;
//	u.get();
//	u.out();
//}