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
        int n, m;
        cin >>n>>m;
        vector<ll> v;
        ll ans= 0;
        for (int i = 0; i < n; i++) {
            ll sum = 0, preSum = 0;
            for (int j =0; j< m; j++) {
                int x;
                cin>>x;
                sum+= x;
                preSum += sum;
            }
            v.push_back(sum);
            ans+= preSum;
        }
        sort(v.rbegin(), v.rend());
        ll extra = 0;
        for (int i = 0; i < n; i++) {
            extra += v[i]*(n-i-1);
        }
        ans += extra*m;
        cout<<ans<<endl;
    }
    
}