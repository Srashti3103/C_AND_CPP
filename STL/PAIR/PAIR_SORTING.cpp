//PAIR SORTING ---->>>>
//first(marks) descending , if first equal no then
//second (names) ascending order 
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,string>p1,pair<int,string>p2)
{
	if(p1.first!=p2.first)
	return p1.first>p2.first;
	return p1.second<p2.second;
}
int main(){
	vector<pair<int,string>>v;
	v={{52,"pp"},{70,"tt"},{90,"kk"},{70,"aa"}};
	sort(v.begin(),v.end(),cmp);
	cout<<"AFTER SORTING :"<<endl;
	for(int i=0;i<4;i++)
	cout<<v[i].first<<" "<<v[i].second<<endl;
}