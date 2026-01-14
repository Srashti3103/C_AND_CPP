//QUEUE------>>> FIRST IN FIRST OUT FIFO
#include<iostream>
#include<queue>
using namespace std;
void showq(queue<int>gq){
	queue<int>g=gq;
	while(!g.empty()){
		cout<<"\t"<<g.front();
		g.pop();
	}
	cout<<'\n';
}
int main(){
	queue<int>q;
	q.push(10);
	q.push(20);
	q.push(30);
	cout<<"THE QUEUE q IS :";
	showq(q);
	cout<<"\nq.size():"<<q.size();
	cout<<"\nq.front():"<<q.front();
	cout<<"\nq.back():"<<q.back();
	cout<<"\nq.pop():";
	q.pop();
	showq(q);
	return 0;
}