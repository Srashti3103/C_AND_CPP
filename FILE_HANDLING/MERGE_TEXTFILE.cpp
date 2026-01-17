//file merge i.txt   j.txt   k.txt(i.txt+j.txt)
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch[80];
	fstream f,g,h;
	f.open("FILE_HANDLING_CREATION_WRITE.cpp",ios::in);//read
	g.open("FILE_HANDLING_CREATON_READING.cpp",ios::in);//read
	h.open("THIRD_FILE_FOR_MERGE.cpp",ios::out);//write
	while(f.getline(ch,80)){
		h<<ch<<endl;//copy first file to third file
	}
	f.close();
	while(g.getline(ch,80)){
		h<<ch<<endl;//copy second file to third file 
	}
	g.close();
	h.close();
	h.open("THIRD_FILE_FOR_MERGE.cpp",ios::in);//read
	while(h.getline(ch,80))
	{
		h<<ch<<endl;
	}
	h.close();
}