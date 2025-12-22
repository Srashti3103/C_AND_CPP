//SEARCH RECORD --->>>NAME 
#include"STUDENT.h"
int main(){
	int r, t=0;
	char name[80];
	student p;
	fstream f;
	f.open("srashti",ios::in|ios::binary);
	cout<<"ENTER NAME TO BE SEARCHED"<<endl;
	cin>>name;
	while(f.read((char*)(&p),sizeof(p)));
	{
		if(strcmp(p.getname(),name)==0){
		t=1;
		p.out();
		}
	}
	if(t==0)
		cout<<"RECORD NOT FOUND "<<endl;
		f.close();
}