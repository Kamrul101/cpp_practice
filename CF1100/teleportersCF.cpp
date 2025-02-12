#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        ll k;
        cin>>n>>k;
        vector<ll> v;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            v.push_back(x+i+1);
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(auto u:v){
            if(u<=k){
                ans++;
                k-=u;
            }
            else break;
        }
        cout<<ans<<endl;
    }
    
}