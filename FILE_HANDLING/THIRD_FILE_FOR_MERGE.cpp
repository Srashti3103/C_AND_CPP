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
//PRINT ONE STUDENT RECORD // CONSTRUCTOR
#include<iostream>
using namespace std;
#include<fstream>
class student {
	private: char name[10];
	int roll;
	public: 
	void out(){
		cout<<"name = "<<name<<endl;
		cout<<"roll = "<<roll<<endl;
	}
};
int main(){
	student p;
	ifstream f("abc.dat");
	f.read((char*)(&p), sizeof(p));
	p.out();
	f.close();
}
