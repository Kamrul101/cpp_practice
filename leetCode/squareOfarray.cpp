#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    optimize();
    vector<int> t;
    vector<int> v;
    for(int i = 0;i<5;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(auto u: v ){
        t.push_back(u*u);
    }
    sort(t.begin(),t.end());
    for(auto u: t){
        cout<<u<<" ";
    }
}