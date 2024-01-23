#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    
    // int n;
    // vector<int> v;
    // cin>>n;
    // v.resize(n);
    // for(int i=0; i<n; i++){
    //     int a;
    //     cin>>a;
    //     v.push_back(a);
    // }
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    // for(int i= 0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    for(int u: v){
        u += 2;
        cout<<u<<" ";
    }
}