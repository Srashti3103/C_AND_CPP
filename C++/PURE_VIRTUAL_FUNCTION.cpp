#include<iostream>
using namespace std;
class graphics{
	public: virtual void draw(){
		cout<<"GRAPHIC DRAW CALLED "<<endl;
	}
	virtual void show()=0;//pure virtual function
};
class ract: public graphics{
	public:void draw(){
		cout<<"ract draw called "<<endl;
	}
	 void show(){
	 	cout<<"ract show called";
	 };
};
class square:public graphics{
	public:void show(){
		cout<<"square show called "<<endl;
	}
};
int main(){
	graphics *p;
	ract r;
	p=&r;
	p->draw();//ract draw called
	square s;
	p=&s;
	p->draw();//graphic draw called
	p->show();//square show called 
}