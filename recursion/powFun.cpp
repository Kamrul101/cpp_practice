#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 1e5+123;
// int dp[mx]={0};

ll power(ll m, ll n){
    if(n==0) return 1;
    if(n%2==0) return pow(m*m, n/2);
    else return m*pow(m*m,(n-1)/2);
}


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll m,n;
        cin>>m>>n;
        cout<<power(m,n)<<endl;
    }
    
    
}
