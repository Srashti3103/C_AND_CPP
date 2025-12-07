//PARAMATERIZED CONSTRUCTOR
//CONSTRUCTOR OVERLOADING
//INTIALIZE AND PRINT COMPLEX NUMBER
#include<iostream>
using namespace std;
class complex{
	private:int a,b;
	public:complex(){
		a=0;b=0;
	}
	complex(int x){
		a=x;b=0;
	}
	complex(int x,int y){
		a=x;b=y;
	}
	void out(){
		cout<<"complex number ="<<a<<"+i"<<b<<endl;
	}
};
int main(){
	complex p;//implicit calling function
	complex q(2);
	complex r(2,3);
	p.out();
	q.out();
	r.out();
}

//int main(){
//	complex p = complex();//explicit calling function
//	complex q = complex(2);
//	complex r = complex(2,3);
//	p.out();
//	q.out();
//	r.out();
//}

