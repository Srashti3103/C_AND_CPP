//ARRAY OF OBJECT
//INPUT AND PRINT N RECORDS
#include<iostream>
using namespace std;
class student{
	private: char name[10];
			 int roll;
			 static int n;
	public:student(){
		n=100;
	}
	void get(){
		cout<<"ENTER NAME"<<endl;
		cin>>name;
		roll=n;
		n++;
	}
	void out()
	{
		cout<<"NAME ="<<name<<endl;
		cout<<"ROLL ="<<roll<<endl;
	}
};
int student::n;
int main(){
	student p[10];
	int i,n;
	cout<<"ENTER SIZE"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		p[i].get();
	}
	for(int i=0;i<n;i++){
		p[i].out();
	}
}