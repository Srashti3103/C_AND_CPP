//ARRAY OF OBJECT
//INPUT AND PRINT N RECORD
#include<iostream>
using namespace std;
class student{
	private: char name[10];
	int rollno;
	public: void get(){
		cout<<"ENTER NAME AND ROLL NUMBER"<<endl;
		cin>>name>>rollno;
	}
	
	void out(){
		cout<<"NAME ="<<name<<endl;
		cout<<"ROLL NUMBER ="<<rollno<<endl;
	}
};
int main(){
	student p[10];
	int n;
	cout<<"ENTER THE SIZE"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		p[i].get();
	}
	for(int i=0;i<n;i++){
		p[i].out();
	}
}