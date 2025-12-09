//INPUT AND PRINT SPECIAL CHARACTERS
#include<iostream>
using namespace std;
int main(){
	char ch[80];
	cout<<"ENTER NAME = "<<endl;
	cin.getline (ch,30);//C---->>>>gets(ch)
	cout.write(ch,30);//C---->>>>puts(ch)
	cout.write(ch,5);
}