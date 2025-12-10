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
	void operator =(complex x){
		a=x.a;
		b=x.b;
	}
	~complex(){
	}
};
int main(){
	complex p(5,2);
	complex q;
	q=p;
	q.out();
	q.out();       
}