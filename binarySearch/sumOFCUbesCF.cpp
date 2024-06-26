#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 1e5 + 123;
ll a[mx];


int main()
{
    optimize();
    int t;
    cin >> t;
    for (ll i = 1; i <= 1e4; i++)
    {
        a[i]= i * i * i;
        
    }
    while (t--)
    {
        ll n;
        cin >> n;

        bool f = false;
        ll ans =0;
        for (ll i = 1; i <= 1e4; i++)
        {
            ll x = n - (i * i * i);
            if (x < 1) break;
            int l = 1, h = 1e4;
            while (l <= h)
            {
                int mid = (l + h) / 2;
                
                if (a[mid] == x)
                {   
                    ans = a[mid];
                    f = true;
                    break;
                }
                if (a[mid] > x)
                    h = mid - 1;
                else
                    l = mid + 1;
            }

            if (f) break;
        }

        if (f) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
}