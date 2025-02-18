#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 2e5 + 123;


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        ll k;
        k=max(a,b);
        k=min(k-a,n);
        ll sold = 0;
        sold+=b*k - (k * (k+1)/2) + k;
        sold+= a * (n-k);
        cout<<sold<<endl;

    }
}