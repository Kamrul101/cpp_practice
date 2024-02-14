#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool comp(const pair<int,int>&p1,const pair<int,int> &p2){
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return(p1.second<p2.second);
    else return 0;
}

int main(){
    optimize();
    int t,k;
    cin>>t>>k;
    vector<pair<int,int>>v(t);
    for(int i=0; i<t;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),comp);
    
    int count=0;
    for(auto u:v){
        if(u==v[k-1]) count++;
    }
    cout<<count<<"\n";

}