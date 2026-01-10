#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>p1,pair<int,int>p2){
    if(p1.first != p2.first)
    return p1.first < p2.first;
    return p1.second > p2.second;
}
int main(){
    vector<pair<int,int>>v;
    v={{4,5},{3,2},{3,9},{7,3},{8,6},{2,9}};
    sort(v.begin(),v.end(),cmp);
    cout<<"AFTER SORTING"<<endl;
    for(int i=0;i<5;i++)
    cout<<v[i].first<<" "<<v[i].second<<endl;
}
