//DYNAMIC INTIALIZATOIN THROUGHT CONSTRUCTOR 
//DYNAMICALLY INPUT AND PRINT N NUMBERS 
#include<iostream>
using namespace std;
class vector {
	private:int *a,n;
	public:vector(){
	}
	vector(int x){//dynamic constructor
	n=x;
	a=new int[n];//dynamic intiallization
	}
	void get(){
		cout<<"ENTER NUMBER"<<endl;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
	}
	void out(){
		cout<<"NUMBER ="<<endl;
		for(int i=0;i<n;i++){
			cout<<a[i]<<endl;
		}
	}
	~vector(){
		delete a;
	}
};
int main(){
	vector p(3);
	p.get();
	p.out();
}