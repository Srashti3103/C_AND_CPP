//ADDITION OF TWO TIMES
#include<iostream>
using namespace std;
class time
{
	private: int hr,min;
	public:void get(){
		cout<<"ENTER hour AND minute"<<endl;
		cin>>hr>>min;
	}
	void out(){
		cout<<hr<<":"<<min<<endl;
	}
	void sum(time x,time y)
	{
		min=(x.min+y.min)%60;
		hr=x.hr+y.hr+(x.min+y.min)/60;
	}
};
int main(){
	time p,q,t;
	p.get();
	q.get();
	t.sum(p,q);
	p.out();
	q.out();
	t.out();
}