//FRIEND CLASS
#include<iostream>
using namespace std;
class test1{
	private: int a,b;
	public:void get(){
		cout<<"ENTER TWO NUMBERS "<<endl;
		cin>>a>>b;
	}
	friend class test2;
};
class test2{
	private: int c;
	public: void sum(test1 x){
		c=x.a+x.b;
	}
	void out(){
		cout<<"sum ="<<c<<endl;
	}
};
int main(){
	test1 p;
	test2 q;
	p.get();
	q.sum(p);
	q.out();
}