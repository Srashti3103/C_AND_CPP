//HIERARICHICAL INHERITANCE
#include<iostream>
using namespace std;
class base{
	protected:int n;
	public:void get(){
		cout<<"ENTER NUMBER"<<endl;
		cin>>n;
	}
};
class square:public base{
	public:void out(){
		cout<<n*n<<endl;
	}
};
class fact:public base{
	protected:int f;
	public:
		fact(){
			f=1;
		}
		void cal(){
			for(int i=1;i<=n;i++){
				f=f*i;
			}
		}
		void out(){
			cout<<"FACT ="<<f<<endl;
		}
};
int main(){
	square s;
	s.get();
	s.out();
	fact p;
	p.get();
	p.cal();
	p.out();
}