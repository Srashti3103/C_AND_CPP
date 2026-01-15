// COPY TEXT FILE
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch[80];
	fstream f, g;
	f.open("COPY.cpp",ios::in);//read
	g.open("XYZ.cpp",ios::out);//write
	while(f.getline(ch,80)){
		g<<ch<<endl;
	}
	f.close();
	g.close();
}