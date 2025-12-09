//FORMATED INPUT OUTPUT
#include<iostream>
using namespace std;
int main(){
	cout.width(6);
	cout<<1234<<endl;;//printf("%6d",1234);
	cout.width(10);
	cout<<56789<<endl;//printf("%10d",56789);
	cout.width(3);//print full because width is less than the length of element //ans -12345
	cout<<12345<<endl;//printf("%3d",12345)
}