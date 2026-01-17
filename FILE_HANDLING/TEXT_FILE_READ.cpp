//READ ONE BY ONE CHARACTER IN TEXT FILE
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch;
	fstream f;
	f.open("COPY_TEXT_FILE.cpp",ios::in);//READ
	while(f.get(ch)){
		cout<< ch << " ";
	}
	f.close();	
}