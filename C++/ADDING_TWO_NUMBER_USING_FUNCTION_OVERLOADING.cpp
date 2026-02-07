//ADDING TWO NUMBER USING FUNCTION OVERLOADING 
//FUNCTION NAME---->>>>SAME
//ARGUMENT---->>>>DIFFERENT
#include<iostream>
using namespace std;
void sum(int a,int b){
	int c;
	c=a+b;
	cout<<"SUM ="<<c<<endl;
}
void sum(float a,float b){
	float c;
	c=a+b;
	cout<<"SUM ="<<c<<endl;
}
int main(){
	sum(2,5);//integer
	sum(1.2f,2.3f);//float//without f take as double
	}