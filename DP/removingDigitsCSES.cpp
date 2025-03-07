#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1e6+123;
int dp[mx];

int remove(int n){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int res = INT_MAX,m=n;
    while(m>0){
        int digit= m%10;
        if(digit!=0){
            res=min(res,remove(n-digit)+1);     
        }
        m/=10;
    }
    return dp[n]=res;
}

int main() {
    optimize();
    int n;
    cin>>n;
    mem(dp,-1);
    cout<<remove(n)<<endl;
}