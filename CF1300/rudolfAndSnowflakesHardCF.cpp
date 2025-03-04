#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

map<ll, int> mp;
void pre()
{
    for (ll i=2; i<=1000000; i++)
    {
        ll res = 1 + i;
        ll p = i;
        ll mx = 1e18 / i;
        while (res <= 1e18)
        {
            if(mx <= p) break;
            p *= i;
            res += p;
            mp[res] = 1;
        }
    }
}

int main() {
    optimize();
    pre();
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (mp[n])
        {
            cout<<"YES"<<endl;
            continue;
        }
        else if (n <= 1e6){
            cout << "NO\n";
            continue;
        }
        n--;
        ll sq = floor(sqrt(n));
        if (sq * sq == n - sq){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    
    return 0;
}
