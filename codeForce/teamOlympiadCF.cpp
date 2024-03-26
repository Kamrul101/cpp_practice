#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int n;
    cin>>n;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==1) v1.push_back(i+1);
        else if(a==2)v2.push_back(i+1);
        else v3.push_back(i+1);
        
    }
    
    int x = min(min(v1.size(),v2.size()),v3.size());
    if(x==0){
        cout<<0<<endl;
    }
    else{
        cout<<x<<endl;
        for(int i=0; i<x; i++){
            cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
        }
    }
}