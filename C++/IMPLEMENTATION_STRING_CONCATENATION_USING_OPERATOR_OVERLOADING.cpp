/*PROGRAM TO IMPLEMENT STRING CONCATENATION 
//USING OPERATOR OVERLOADING*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class string_concat{
	char name[20];
	public:
		void input(){
			gets(name);
		}
		void output(){
			cout<<name<<endl;
		}
		string_concat operator +(string_concat tmp){
			string_concat s;
			strcat(name," ");
			strcpy(s.name,name);
			strcat(s.name,tmp.name);
			return(s);
		}
};
int main(){
	string_concat s1,s2,s3;
	cout<<"ENTER FIRST NAME: ";
	s1.input();
	cout<<"ENTER LAST NAME: ";
	s2.input();
	s3=s1+s2;
	cout<<"COMPLETE NAME IS:";
	s3.output();
	return 0;
}