//FUNCTION TEMPLATE 
//ADDITION OF TWO NUMBERS
#include<iostream>
using namespace std;
template<class t>
void sum(t a,t b){
	t c;
	c=a+b;
	cout<<"SUM ="<<c<<endl;
}
int main(){
	sum(2,5);
	sum(4.3f,2.8f);
}