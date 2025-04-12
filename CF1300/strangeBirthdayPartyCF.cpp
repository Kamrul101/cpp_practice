#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =3e5+123;
// int a[mx];
ll b[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        map<ll,int> mp;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i],a[i]--;
        for(int i=0;i<m;i++) cin>>b[i], mp[b[i]]++;
        sort(a.rbegin(),a.rend());
        ll ans=0;
        for(ll i = 0; i < n; i++){
            ll j;
            if(i<a[i]) j=i;
            else j = a[i];
            ans += b[j];
        }
        cout<<ans<<endl;
    }
    
}