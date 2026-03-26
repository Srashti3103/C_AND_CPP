//ADDITION OF TWO NUMBER USING CLASS AND OBJECT
#include<iostream>
using namespace std;
class sum{
	private: int a,b,c;
	public: void get(){
		cout<<"ENTER TWO NUMBER"<<endl;
		cin>>a>>b;
	}
	void cal(){
		
		c=a+b;
	}
	void out(){
		cout<<"SUM="<<c<<endl;
	}
};
int main(){
	sum p;
	p.get();
	p.cal();
	p.out();
}