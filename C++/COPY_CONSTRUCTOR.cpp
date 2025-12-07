//COPY CONSTRUCTOR
//INTIALIZE AND COPY COMPLEX NUMBER
#include<iostream>
using namespace std;
class complex{
	private: int a,b;
	public:complex(){//default constructor
		a=0;b=0;
	}
	complex(int x, int y){//paramaterized constructor
		a=x;b=y;
	}
	complex(complex &x){//copy constructor
	a=x.a;
	b=x.b;
	}
	void out(){
		cout<<a<<"+i"<<b<<endl;
	}
	~complex(){//destructor
	}
};
int main(){
	complex p(3,2);//paramaterized
	complex q(p);//call copy constructor
	p.out();
	q.out();
}