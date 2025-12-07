//CALLING CONSTRUCTOR AND DESTRUCTOR
#include<iostream>
using namespace std;
class test{
	public:test(){
		cout<<"CONSTRUCTOR CALLED ="<<this<<endl;
	}
	~test(){
		cout<<"DESTRUCTOR CALLED ="<<this<<endl;
	}
};
int main(){
	{
		test p;
		test q;
		test r;
	}
}