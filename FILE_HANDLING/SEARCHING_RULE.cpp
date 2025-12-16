#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
class student{
	private: char name[10];
			int roll;
	public: void get(){
		cout<<"ENTER NAME AND ROLL"<<endl;
		cin>>name>>roll;
	}
	void out(){
		cout<<"name = "<<name<<endl;
		cout<<"roll = "<<roll<<endl;
	}
	int getroll(){
		return(roll);
	}
	char* getname(){
		return(name);
	}
};
int main(){
	int r; int t=0; student p; fstream f;
	f.open("srashti",ios::in| ios::binary);
	cout<<"ENTER ROLL NUMBER TO BE SEARCHED"<<endl;
	cin>>r;
	while(f.read((char*)(&p),sizeof(p)))
	{
		if(p.getroll() == r){
			if(p.getroll() == r)
			{
				t=1;
				p.out();
				break;
			}
		}
		if(t=0){
			cout<<"RECORD NOT FOUND ...."<<endl;
		}
		f.close();
	}
} 
