#include<iostream>
#include<fstream>
using namespace std;
class student {
	private: char name[10];
	int roll;
	public: void get(){
		cout<<"ENTER NAME AND ROLL "<<endl;
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