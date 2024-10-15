#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];
int binomial(int n, int k) {
    int res = 1;
    while (k > 0) {
        if (k % 2 == 1) {
            res = (res*n) % MOD;
        }
        n = (n*n) % MOD;
        k/=2;
    }
    return res;
}
int main() {
    optimize();
    int t;
    cin>>t;
    vector<int> v1,v2;
    
    for(int i=0;i<t;i++){
        ll x;
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<t;i++){
        ll x;
        cin>>x;
        v2.push_back(x);
    }
    for(int i=0;i<t;i++){
        ll ans = binomial(2,v2[i]);
        cout<<ans<<endl;
    }
    
}