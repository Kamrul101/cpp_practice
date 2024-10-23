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
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v;
        int m = (n*(n-1))/2;
        for(int i=0;i<m;i++) {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll  ans = v.back();
        for(int i=0;i<m;i+=n) {
            cout<<v[i]<<" "<<i<<endl;
            n--;
        }
        cout<<ans<<endl;
    }
    
}