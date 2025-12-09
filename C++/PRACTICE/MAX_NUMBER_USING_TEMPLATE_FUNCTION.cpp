//FIND MAX NUMBER USING TEMPLATE FUNCTION
#include<iostream>
using namespace std;
template<class t>
t max1(t a,t b){
	return((a>b)?a:b);
}
int main(){
	cout<<max1(3,2)<<endl;
	cout<<max1(2.4f,6.4f)<<endl;
	cout<<max1('A','a')<<endl;
}