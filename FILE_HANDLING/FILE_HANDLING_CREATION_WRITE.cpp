//FILE HANDLING CREATION 
//INPUT ONE STUDENT RECORD 
//CONSTRUCTOR METHOD
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
};
int main(){
	student p;
	ofstream f("abc.dat");
	p.get();
	f.write((char*)(&p), sizeof(p));
	f.close();
}