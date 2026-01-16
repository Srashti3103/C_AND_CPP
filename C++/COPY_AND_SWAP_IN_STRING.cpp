//COPY SWAP 
#include<iostream>
#include<string>
using namespace std;
int main(){
	string str= "WELCOME";
	char ch[80];
	str.copy(ch,3,0);
	cout<<"COPIED ARRAY IS :"<<ch<<endl;
	string str1 ="INDIA";
	string str2 ="BHARAT";
	str1.swap(str2);
	cout<<str1<<endl<<str2<<endl;
	if(str1 == str2)//if(str1.compare(str2))
	cout<<"YES";
	else
	cout<<"NO"<<endl;
	string str3;
	str3=str1+str2;
	cout<<str3<<endl;
	cout<<str1.size()<<endl;
	
}