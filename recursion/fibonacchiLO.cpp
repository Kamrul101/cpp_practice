#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 10000007

#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 1e5+123;
ll dp[10123];

int a, b, c, d, e, f;

ll fib(int n){
    if (n == 0) {dp[n]=a;
    return dp[n];
    }
    else if (n == 1) {dp[n]=b;
    return dp[n];
    }
    else if (n == 2) {dp[n]=c;
    return dp[n];
    }
    else if (n == 3) {dp[n]=d;
    return dp[n];
    }
    else if (n == 4) {dp[n]=e;
    return dp[n];
    }
    else if (n == 5) {dp[n]=f;
    return dp[n];
    }

    else{
        if(dp[n-1]==-1) dp[n-1] = fib(n-1)%MOD;
        if(dp[n-2]==-1) dp[n-2] = fib(n-2)%MOD;
        if(dp[n-3]==-1) dp[n-3] = fib(n-3)%MOD;
        if(dp[n-4]==-1) dp[n-4] = fib(n-4)%MOD;
        if(dp[n-5]==-1) dp[n-5] = fib(n-5)%MOD;
        if(dp[n-6]==-1) dp[n-6] = fib(n-6)%MOD;
        dp[n] = (dp[n-1]+dp[n-2] +  dp[n-3]+ dp[n-4]+ dp[n-5]+ dp[n-6])%MOD;
        return (dp[n-1]+dp[n-2] +  dp[n-3]+ dp[n-4]+ dp[n-5]+ dp[n-6])%MOD;
    }
    
}

int main() {
    optimize();
    int t;
    cin>>t;
    
    for(int i=1;i<=t;i++){
        mem(dp,-1);
        int n;
        cin>>a>>b>>c>>d>>e>>f>>n;
         cout << "Case " << i << ": " << fib(n) << endl;
        
    }
    
    
}
 