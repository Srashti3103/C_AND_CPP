//READ LINE BY LINE IN TEXT FILE 
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch[80];
	fstream f;
	f.open("COPY_TEXT_FILE.cpp",ios::in);
	while(f.getline(ch,80)){
		cout<< ch << endl << endl;
	}
	f.close(); 
}