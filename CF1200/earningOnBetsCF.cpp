#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 55;
ll a[mx];
ll n;

bool check(ll val){
    ll sum = 0;

    for(int i=0;i<n;i++){
        ll x = val/a[i] + 1;
        sum+=x;
        if(sum>val) return false;
    }

    return (sum<=val);
}

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];

        ll l=1,h=1e10, ans = -1;

        while(l<=h){
            ll mid = l + (h-l)/2;
            if(check(mid)){
                ans = mid;
                h = mid -1;
            }
            else l = mid + 1;
            
        }

        if(ans==-1) cout<<-1<<endl;
        else{
            for(int i=0;i<n;i++){
                cout<<ans/a[i] + 1<<" \n"[i==n-1];
            }
        }


        
    }
    
}