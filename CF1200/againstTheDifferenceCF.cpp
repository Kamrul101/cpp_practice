#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx],dp[mx];
int n;
vector<int>ind[mx];
vector<int>mp;

int solve(int idx){
    if(idx==n) return 0;
    if(dp[idx]!=-1) return dp[idx];
    int ans = 0;

    int cur = a[idx];
    int now = mp[idx];

    if(now+a[idx]-1 < ind[cur].size()){
        int res = a[idx] + solve(ind[cur][now+a[idx]-1] + 1);
        ans = max(ans,res); 
    }
    ans = max(ans,solve(idx+1));

    return dp[idx]=ans;

}

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        mem(dp,-1);
        mem(a,0);

        for(int i=0;i<=n;i++) ind[i].clear();
        mp.resize(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            ind[a[i]].push_back(i);
            mp[i] = ind[a[i]].size() - 1;
        }
        cout<<solve(0)<<endl;
    }
}