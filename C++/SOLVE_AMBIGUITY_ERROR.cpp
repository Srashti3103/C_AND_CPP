//SOLVE AMBIGUITY ERROR
#include<iostream>
using namespace std;
class base1{
	protected:int a;
	public:void get(){
		cout<<"ENTER a ="<<endl;
		cin>>a;
	}
};
class base2{
	protected:int b;
	public:void get(){
		cout<<"ENTER b ="<<endl;
		cin>>b;
	}
};
class derived:public base1,public base2
{
	protected:int c;
	public: void sum(){
		c=a+b;
	}
	void out(){
		cout<<"SUM ="<<c<<endl;
	}
};
int main(){
	derived p;
	p.base1::get();
	p.base2::get();
	p.sum();
	p.out();
}