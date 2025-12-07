//STATIC DATA MEMBER AND STATIC MEMBER FUNCTION 
#include<iostream>
using namespace std;
class test{
	private:static int n,a;
	public:test(){
		n++;
		a++;
	}
	static void out(){
		cout<<"TOTAL NUMBER OF OBJECT ="<<n<<endl;
		cout<<"NUMBER OF ALIVE OBJECT ="<<a<<endl;
	}
	~test(){
		a--;
	}
};
int test::n=0;
int test::a=0;
int main(){
	test p,q,t;
	test::out();
	{
		test u,v;
		test::out();
	}
	test::out();
}