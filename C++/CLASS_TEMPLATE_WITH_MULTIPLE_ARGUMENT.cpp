//CLASS TEMPLATE WITH MULTIPLE ARGUMENT
//INPUT AND PRINT TWO DIFFERENT NUMBER
#include<iostream>
using namespace std;
template<class t,class u>
class test{
	private:t a;
			u b;
	public:void get(){
		cout<<"ENTER TWO NUMBERS"<<endl;
		cin>>a>>b;
	}
	void out(){
		cout<<a<<endl<<b<<endl;
	}
};
int main(){
	test<int,float>p;
	p.get();
	p.out();
	test<float,char>q;
	q.get();
	q.out();
}