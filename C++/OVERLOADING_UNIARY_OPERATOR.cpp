//OVERLOADING ASSIGNMENT(=) OPERATOR
//COPY COMPLEX NUMBER
#include<iostream>
using namespace std;
class complex{
	private: int a,b;
	public: complex(){
		
	}
	complex(int x,int y){
		a=x;
		b=y;
	}
	void out(){
		cout<<a<<"+i"<<b<<endl;
	}
	void operator-(){
		a=-a;
		b=-b;
	}
	~complex(){
	}
};
int main(){
	complex p(3,2);
	p.out();
	-p;
	p.out();       
}