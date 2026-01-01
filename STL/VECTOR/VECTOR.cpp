//INTIALIZATION OF VECTOR 
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
	for(int i:v){//range base loop
		cout<<i<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int> v1 ={1,2,3,4,5};//intialize list
	print(v1);
	vector<int> v2 ={6,7,8,9,10};//uniform intializatoin
	print(v2);
	vector<int> v3(5);
	print(v3);//0 0 0 0 0
	vector<int> v4(5,12);
	print(v4);//12 12 12 12 12
}