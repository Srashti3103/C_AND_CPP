 //SINGLE INHERITANCE 
 #include<iostream>
 using namespace std;
 class base{
 	protected: int a,b;
 	public:void get(){
 		cout<<"ENTER TWO NUMBERS"<<endl;
 		cin>>a>>b;
	 }
 };
 class derived:public base{
 	public:void out(){
 		cout<<a<<endl<<b<<endl;
	 }
 };
 int main(){
 	derived p;
 	p.get();
 	p.out();
 }