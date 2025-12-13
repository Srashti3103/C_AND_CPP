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
	void operator ++(){
		a=a+1;
		b=b+1;
	}
	void operator --(){
		a=a-1;
		b=b-1;
	}
	void operator +=(int t)
	{
		a=a+t;
		b=b+t;
	}
	void operator -=(int t)
	{
		a=a-t;
		b=b-t;
	}
	~complex(){
	}
};
int main(){
	complex p(3,2);
	p.out();
	p += 5;
	p.out();
	p -= 2;
	p.out();
	p.operator ++() ;
	p.out();
	p.operator --() ;
	p.out();       
}