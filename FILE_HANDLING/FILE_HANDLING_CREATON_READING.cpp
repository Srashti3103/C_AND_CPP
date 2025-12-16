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