#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a))
const int mx = 2e5+123;
ll a[mx];

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin>>n>>m;
        for (int i=0;i<n;i++) cin>>a[i];
        ll b;
        cin >>b;
        ll prev = min(a[0], b - a[0]);
        bool possible = true;
        for (int i=1;i<n;i++) {
            ll x1 = a[i];
            ll x2 = b-a[i];
            if (x1>=prev && x2>=prev) prev = min(x1,x2);
            else if (x1>=prev) prev = x1;
            else if (x2 >= prev) prev = x2;
            else {
                possible = false;
                break;
            }
        }
        cout<<(possible?"YES":"NO")<<endl;
    }
}
