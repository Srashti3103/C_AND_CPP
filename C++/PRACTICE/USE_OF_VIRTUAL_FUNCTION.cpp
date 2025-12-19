//VIRTUAL FUNCTION
#include<iostream>
using namespace std;
class A{
	public:virtual void disp(){
		cout<<"\n Class A";
	}
};
class B:public A{
	public:void disp(){
		cout<<"\n Class B";
	}
};
class C:public B{
	public:void disp(){
		cout<<"\n Class C";
	}
};
int main(){
	A ob1,*ptr;
	B ob2;
	C ob3;
	ptr=&ob1;
	ptr->disp();
	ptr=&ob2;
	ptr->disp();
	ptr=&ob3;
	ptr->disp();
}