#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 2e5 + 123;


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll p = 1;
        ll s = (n*(n+1))/2;
        while(p<=n){
            s-=(p*2);
            p*=2;
        }
        cout<<s<<endl;
    }
}