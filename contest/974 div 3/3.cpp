#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

vector<ll> v;
ll sum;

bool check ( ll m, int n){
    v.back()+=m;
    sum+=m;
    int cnt=0;
    for(auto u:v){
        if((u*n*2)<sum) cnt++;
    }
    v.back()-=m;
    sum-=m;
    return (cnt*2 > n);
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        v.clear();
        sum=0;
        for(int i=1;i<=n;i++){
            ll x;
            cin>>x;
            v.push_back(x);
            sum+=x;
        }
        sort(v.begin(),v.end());
        
        ll l = 0, r = 1e16,ans=-1;

        while(l<=r){
            ll mid = l+(r-l)/2;
            if(check( mid, n)){
                ans = mid;
                r = mid -1;
            }
            else l = mid +1;
        }
        cout<<ans<<endl;
    }
    
}