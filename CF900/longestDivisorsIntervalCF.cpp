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
        ll n,i;
        cin>>n;
        for(i=1;i<=n;i++){
            if(n%i!=0) break;
        }
        cout<<i-1<<endl;
    }
}