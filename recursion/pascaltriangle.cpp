#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 1e5+123;
// int dp[mx]={0};



void pascalTriangle(ll n){
    ll res = 1;
    cout<<res<<" ";
    for(int i=1;i<n;i++){
        res = res*(n-i);
        res/=(i);
        cout<<res<<" ";
    }
    
}

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        pascalTriangle(n);
        cout<<endl;
    }
    
    
}
