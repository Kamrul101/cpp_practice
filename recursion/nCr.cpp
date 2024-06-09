#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 1e5+123;
// int dp[mx]={0};

ll nCr(ll n, ll r){
    if(r==0 || n==r) return 1;
    else return nCr(n-1, r-1) + nCr(n-1,r);
}

ll nCrIt(ll n,ll r){
    ll res = 1;
    for(int i=0;i<r;i++){
        res = res*(n-i);
        res/=(i+1);
    }
    return res;
}

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n,r;
        cin>>n>>r;
        cout<<nCr(n,r)<<endl;
    }
    
    
}
