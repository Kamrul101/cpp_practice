#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
 
const int mx = 1e5+123;
int a[mx];
 
int main()
{
    optimize();
 
    int n, t;
    cin >> n >> t;
 
    for ( int i = 0; i < n; i++ ) cin >> a[i];
 
    while ( t-- ) {
        int k;
        cin >> k;
 
        int l = 0, h = n-1;
        int ans = -1;
 
        while ( l <= h ) {
            int mid = ( l + h ) / 2;
 
            if ( a[mid] == k ) ans = mid;
            if ( a[mid] >= k ) {
                h = mid-1;
            }
            else {
                l = mid+1;
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
 
