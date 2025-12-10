//FRIEND FUNCTION->NORMAL FUNCTION->ACCESS PRIVATE DATA MEMBER
#include<iostream>
using namespace std;
class test2;//FORWARD DECLARATION
class test1{
	private: int a ;
	public:void get(){
		cout<<"ENTER a"<<endl;
		cin>>a;
	}
	void out(){
		cout<<"a ="<<a<<endl;
	}
	friend void swap(test1 &x,test2 &y);//DECLARATION FRIEND FUNCTION
};
class test2{
	private: int b ;
	public:void get(){
		cout<<"ENTER b"<<endl;
		cin>>b;
	}
	void out(){
		cout<<"b ="<<b<<endl;
	}
	friend void swap(test1 &x,test2 &y);
};
void swap(test1 &x,test2 &y){
	int c;
	c=x.a;
	x.a=y.b;
	y.b=c;
}
int main(){
	test1 p;
	test2 q;
	p.get();
	q.get();
	swap(p,q);
	p.out();
	q.out();	
}