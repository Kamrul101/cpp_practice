#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e2+123;
int v[mx][mx],dp[mx][mx];
int n,k;

int solve(int i,int j){
    if (i == k - 1) return v[i][j]; 
    if (dp[i][j] != -1) return dp[i][j]; 
    int r1 = v[i][j] + solve(i+1,j);
    int r2 = v[i][j] + solve(i+1,j+1);
    return dp[i][j] = max(r1, r2);
}

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        k=2*n-1;
        mem(dp,-1);
        mem(v,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++) cin>>v[i][j]; 
        }
        int l=1;
        for(int i=n;i<k;i++){
            for(int j=l;j<n;j++) cin>>v[i][j]; 
            l++;
        }
        cout<<solve(0,0)<<endl;
    }
    
}