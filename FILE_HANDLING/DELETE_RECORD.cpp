//DELETE  RECORDS 
#include"STUDENT.h"
int main(){
	int r, found =0;
	student p; 
	fstream f,g;
	f.open("abc.dat",ios::in | ios::binary);//read
	g.open("pqr.dat",ios::out | ios::binary);//write
	cout<<"ENTER ROLL NUMBER TO BE DELETED "<<endl;
	cin>>r;
	while(f.read((char*)(&p),sizeof(p))){
		if(p.getroll()!=r)
			g.write((char*)(&p),sizeof(p));//write
			else
			found = 1;
}
	f.close();
	g.close();
	remove("abc.dat");
	rename("pqr.dat","abc.dat");
	if(found)
    	cout<<"Record Deleted";
	else
    	cout<<"Record Not Found";
	
}