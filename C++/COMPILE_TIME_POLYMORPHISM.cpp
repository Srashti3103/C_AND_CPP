//COMPILE TIME POLYMORPHISM 
//STATIC BINDING 
//EARKIER BINDING
#include<iostream>
using namespace std;
class base{
	protected: int a,b;
	public:void get(){
		cout<<"ENTER NUMBER "<<endl;
		cin>>a>>b;
	}
	void out(){
		cout<<"a= "<<a<<endl;
		cout<<"b= "<<b<<endl;
	}
};
class derived: public base{
	protected:char name[10];
			  int roll;
	public:void get(){
		cout<<"ENTER NAME AND ROLL "<<endl;
		cin>>name>>roll;
	}
	void out(){
		cout<<"NAME = "<<name<<endl;
		cout<<"ROLL = "<<roll<<endl;
	}
};
int main(){
	base *p;
	base b;
	p=&b;
	p->get();
	p->out();
	derived d;
	p=&d;
	p->get();
	p->out();
}