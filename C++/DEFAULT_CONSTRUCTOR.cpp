//DEFAULT CONSTRUCTOR
//WRITE A PROGRAM TO FIND FACTORIAL 
#include<iostream>
using namespace std;
class fact{
	private: int f,n;//only declaration
	public: fact(){//constructor(special member function)
		f=1;//initialize data member
	}
	void get(){
		cout<<"ENTER NUMBER"<<endl;
		cin>>n;
	}
	void cal(){
		for(int i=1;i<=n;i++){
			f=f*i;
		}
	}
	void out(){
		cout<<"FACTORIAL ="<<f<<endl;
	}
};
int main(){
	fact p;
	p.get();
	p.cal();
	p.out();
}