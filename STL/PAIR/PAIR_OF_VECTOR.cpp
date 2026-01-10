//PAIR OF VECTOR
#include<bits/stdc++.h>
using namespace std;
void print(auto &v){
	cout<<"size:"<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<" ";
		cout<<v[i].second<<endl;
	}
}
int main(){
	vector<pair<int,int>>v={{1,9},{2,4},{3,5}};
	print(v);
}