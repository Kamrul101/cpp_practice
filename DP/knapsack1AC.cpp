#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx],b[mx],dp[105][100005];
int n,weight;


ll solve(int idx, int w){

    if(idx==n)  return 0;
    if(dp[idx][w]!=-1) return dp[idx][w];
    ll res = 0;

    ll take = 0,notTake =0;
    if(a[idx]+w <= weight) {
        take =  b[idx] + solve(idx+1,w+a[idx]);
        // res = max(take,res);
    } 
    notTake = solve(idx+1,w);
    res = max(take,notTake);
    return dp[idx][w]= res;


}

int main() {
    optimize();

    cin>>n>>weight;
    mem(dp,-1);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    

    cout<<solve(0,0)<<endl;
    
}