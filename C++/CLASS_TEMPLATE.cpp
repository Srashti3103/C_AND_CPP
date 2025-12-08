//CLASS TEMPLATE 
//INPUT AND PRINT TWO NUMBERS
#include<iostream>
using namespace std;
template<class t>
class test{
	private:t a,b;
	public:void get(){
		cout<<"ENTER TWO NUMBERS"<<endl;
		cin>>a>>b;
	}
	void out(){
		cout<<a<<endl<<b<<endl;
	}
};
int main(){
	test<int>p;
	p.get();
	p.out();
	test<float>q;
	q.get();
	q.out();
}