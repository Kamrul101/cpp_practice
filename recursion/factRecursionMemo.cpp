#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 1e5+123;
int dp[mx]={0};


//if number is greater than 10^18
ll factLong(ll n){
    if(n==0) return 1;
    if(dp[n]!=0) return dp[n];
    ll res = (factLong(n-1)*n)%MOD;
    return dp[n] = res;
}

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<factLong(n)<<endl;
    }
    
    
}
