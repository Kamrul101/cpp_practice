#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 1e5+123;
int dp[mx]={-1};


int fib(int n){
    if(n<=1) { 
        dp[n] = n;
        return dp[n];
    }
    else{
        if(dp[n-2]==-1) dp[n-2] = fib(n-2);
        if(dp[n-1]==-1) dp[n-1] = fib(n-1);
        dp[n] = dp[n-2] + dp[n-1];
        return dp[n-2]+dp[n-1];
    }
}

int main() {
    optimize();
    int t;
    cin>>t;
    memset(dp,-1,mx);
    
    while(t--){
        int n;
        cin>>n;
        cout<<fib(n)<<endl;
        
    }
    
    
}
