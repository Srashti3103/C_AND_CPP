//KEYWORD---->>>> this POINTER 
//ADDRESS OF THE CURRENT OBJECT IN CLASS
#include<iostream>
using namespace std;
class test{
	private: int a;
	public: test(){
		a=5;//IMPLICIT WAY
		this->a=5;//EXPLICIT WAY
	}
	void out(){
		cout<<"a ="<<a<<endl;
		cout<<"a ="<<this->a<<endl;
		cout<<"ADDRESS OF THE OBJECT ="<<this<<endl;
	}
};
int main(){
	test p;
	p.out();
}