#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 2e5+123;
ll a[mx];

int main() {
    optimize();
    int n;
    cin>>n;
    ll x=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]+=x;
        x = max(x,a[i]);
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
}