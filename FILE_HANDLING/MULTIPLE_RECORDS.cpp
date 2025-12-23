#include"STUDENT.h"
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
