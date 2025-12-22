#include"STUDENT.h"
using namespace std;
int main(){
	int n;
	student p;
	fstream f;
	f.open("abc.dat",ios::in);//read
	cout<<"ENTER RECORD NUMBER TO BE SEARCHED"<<endl;
	cin>>n;
	f.seekg((n-1)*sizeof(p),ios::beg);
	f.read((char*)(&p),sizeof(p));
	p.out();
	f.close();
}