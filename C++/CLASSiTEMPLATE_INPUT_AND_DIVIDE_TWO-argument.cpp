//CLASS TEMPLATE 
//INPUT AND DIVIDE TWO NUMBER
#include<iostream>
using namespace std;
template<class t>
class test{
	private:t a,b,c;
	public:void get(){
		cout<<"ENTER TWO NUMBERS"<<endl;
		cin>>a>>b;
	}
	void out(){
		c=a/b;
		cout<<"VALUE OF C"<<c<<endl;
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