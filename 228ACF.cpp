#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    vector<int> v;
    for(int i=0;i<4;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int t= v.size();
    sort(v.begin(),v.end());
    int sz = unique(v.begin(),v.end())-v.begin();
    cout<<t-sz<<endl;

    
}