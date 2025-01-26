#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 5e5 + 123;
// ll a[mx];


int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<ll> a(n);
        ll ans = 0;
        for (int i=0; i<n; i++) {
            cin>>a[i];
            ans+= a[i];
        }
        while ( a.size() > 1 ){
            vector<ll> cur;
            ll sum = 0;
            for(int i=0;i<a.size()-1;i++){
                ll x =a[i + 1]-a[i];
                cur.push_back(x);
                sum += x;
            }
            sum = abs(sum);
            ans = max(ans, sum);
            a = cur;
        }
        cout<<ans<<endl;
    }
}