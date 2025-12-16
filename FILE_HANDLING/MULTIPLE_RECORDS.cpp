//MULTIPLE RECORD 
//INPUT AND PRINT N STUDENTS RECORDS
#include<iostream>
using namespace std;
#include<fstream>
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
int main(){
	char ch; 
	student p;
	fstream f;
	f.open("srashti",ios::out);
	do{
		p.get();
		f.write((char*)(&p),sizeof(p));
		cout<<"WANT TO CONTINUE(y/n)"<<endl;
		//fflush(stdin);
		cin>>ch;
	}
	while(ch == 'y');
	f.close();
	f.open("srashti",ios::in);
	while(f.read((char*)(&p),sizeof(p))){
		p.out();
	}
	f.close();
}
