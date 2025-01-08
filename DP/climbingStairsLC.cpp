#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int dp[mx];
int climb(int i){
    if (i<=1) return 1;
    if(dp[i]!=-1) return dp[i];
    return dp[i] = climb(i-1) + climb(i-2);
}
int main() {
    optimize();
    int n;
    cin>>n;
    mem(dp,-1);
    cout<<climb(n)<<endl;
}