#include<bits/stdc++.h>
using namespace std;
void print(auto &v){
	cout<<"size of vector = "<<v.size()<<endl;
	for(int &i:v)
	cout<<i<<" ";
	cout<<endl;
}
int main(){
	vector<int>v{1,2,3,4,5};
	print(v);
	//add the integer 6 and 7 to the vector
	v.push_back(6);
	v.push_back(7);
	print(v); 
	v.pop_back();
	print(v);
}
