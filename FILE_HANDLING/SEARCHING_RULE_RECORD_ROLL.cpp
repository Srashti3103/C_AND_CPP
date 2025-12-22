//LINEAR AND SEQUENTIAL SEARCH 
//SEARCH RECORD--->>> ROLL NUMBER 
#include"STUDENT.h"
int main(){
	int r; int t=0; student p; fstream f;
	f.open("srashti",ios::in| ios::binary);
	cout<<"ENTER ROLL NUMBER TO BE SEARCHED"<<endl;
	cin>>r;
	while(f.read((char*)(&p),sizeof(p)))
	{
		if(p.getroll() == r)
			{
				t=1;
				p.out();
				break;
			}
		if(t=0){
			cout<<"RECORD NOT FOUND ...."<<endl;
		}
		f.close();
	}
} 
