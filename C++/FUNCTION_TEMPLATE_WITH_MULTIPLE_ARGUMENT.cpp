//FUNCTION TEMPLATE WITH MULTIPLE  ARGUMENT 
#include<iostream>
using namespace std;
template<class t,class u>
void write(t a,u b){
	cout<<a<<endl;
	cout<<b<<endl;
}
int main(){
	write(2,4.5);
	write(2,'a');
	write(2.3,6);
	write(5.6,'b');
	write('a',4.3);
}
