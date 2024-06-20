#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 2e5 + 123;
ll a[mx];


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll c,b,n;
        cin>>c>>b>>n;
        ll t = b;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            t+=min(a[i],c-1);
        }

        cout<<t<<endl;

    }
}