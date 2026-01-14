//STACK---->>> LAST IN FIRST OUT LIFO
#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int>s;
	s.push(21);
	s.push(22);
	s.push(24);
	s.push(25);
	int num=0;
	s.push(num);
	s.pop();
	s.pop();
	s.pop();
	while(!s.empty()){
		cout<<s.top()<<' ';
		s.pop();
	}//o(n)
	
}