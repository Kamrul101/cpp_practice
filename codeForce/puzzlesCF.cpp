#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int n,t;
    cin>>n>>t;
    vector<int>v;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    // int sz = unique(v.begin(),v.end())-v.begin();
    int mn =10001;
    for(int i=n-1;i<t;i++){
        mn = min(mn, v[i]-v[i-n+1]);
        
    }
    cout<<mn<<endl;
    
    
}
