#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1001;
char a[mx][mx];
int dp[mx][mx];
int solve(int i,int j){
    if(i>=0 && j>=0 && a[i][j]=='*') return 0;
    if(i==0 && j==0) return 1;
    if(i<0 || j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int up = solve(i-1,j)%MOD;
    int left = solve(i,j-1)%MOD;
    return dp[i][j] = (up+left)%MOD;
}

int main() {
    optimize();
    int n;
    cin>>n;
    mem(dp,-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<solve(n-1,n-1)<<endl;
    
}