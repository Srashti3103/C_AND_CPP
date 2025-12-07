//constructor with default argument 
//INTIALIZE AND PRINT COMPLEX NUMBER
#include<iostream>
using namespace std;
class complex{
	private:int a,b;
	public:complex(int x=0,int y=0){
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

