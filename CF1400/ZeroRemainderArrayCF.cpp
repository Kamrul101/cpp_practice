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
        int n,k;
        cin>>n>>k;
        map<int,ll>mp;
        ll ans = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            int a = (k - (x%k))%k;
            if(a){
                if(mp.count(a)){
                    mp[a] += k;
                }
                else mp[a] = a;
            }
            else continue;
            ans = max(ans, (ll)mp[a]+1);
        }
        cout<<ans<<endl;
        
    }
    
}