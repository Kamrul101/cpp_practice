#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 998244353
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =200;
int a[mx],b[mx];

// vector<int> a,b;
// int n;
// map<tuple<int,int,int>,int>dp;


// int solve(int i, int lastA, int lastB) {
//     if(i == n) return 1;

//     auto key = make_tuple(i, lastA, lastB);
//     if(dp.count(key)) return dp[key];

//     long long res = 0;

//     if (a[i] >= lastA && b[i] >= lastB){
//         res += solve(i + 1, a[i], b[i]);
//     }

//     if (b[i] >= lastA && a[i] >= lastB){
//         res += solve(i + 1, b[i], a[i]);
//     }

//     return dp[key] = res % MOD;
// }


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // a.resize(n);
        // b.resize(n);

        for(int i=0;i<n;i++) cin>>a[i];
        for(int j=0;j<n;j++) cin>>b[j];

        // dp.clear();
        
        int ans = 1;

        for(int i=0;i<n;i++){
            if(a[i]>b[i]) swap(a[i],b[i]);
            if(!i || a[i]>=b[i-1]) ans = (ans*2LL)%MOD;
        }
        cout<<ans<<endl;
    }
    
}