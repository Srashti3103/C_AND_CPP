//ADDITION OF TWO NUMBER USING FRIEND FUNCTION
#include<iostream>
using namespace std;
class complex{
	private: int a,b;
	public:void get(){
		cout<<"ENTER REAL AND IMAGINARY VALUE"<<endl;
		cin>>a>>b;
	}
	void out(){
		cout<<a<<"+i"<<b<<endl;
	}
	friend complex sum(complex x,complex y);
};
complex sum(complex x,complex y){
	complex w;
	w.a=x.a+y.a;
	w.b=x.b+y.b;
	return(w);
}
int main(){
	complex p,q,t;
	p.get();
	q.get();
	t=sum(p,q);
	p.out();
	q.out();
	t.out();
}