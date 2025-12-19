//RUN TIME POLYMORPHISM 
//DYNAMIC BINDING 
//LATE BINDING
//VIRTUAL FUNCTION
#include<iostream>
using namespace std;
class base{//manager//gener
protected:int a,b;
public: virtual void get(){
	cout<<"ENTER NUMBER "<<endl;
	cin>>a>>b;
}
virtual void out(){
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
}	
};
class derived:public base{
	protected:char name[10];
			   int roll;
	public:void get(){
		cout<<"ENTER NAME AND ROLL "<<endl;
		cin>>name>>roll;
	}
	void out(){
		cout<<"NAME ="<<name<<endl;
		cout<<"ROLL ="<<roll<<endl;
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