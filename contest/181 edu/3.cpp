#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

ll check(ll n){
    vector<int> prime = {2,3,5,7};
    ll bad  = 0;
    for(int mask = 1;mask<(1<<4);mask++){
        ll lo = 1;
        int bits = __builtin_popcount(mask);
        for(int i=0;i<4;i++){
            if(mask&(1<<i)){
                lo*=prime[i];
            }
        }
        ll d = n/lo;
        if(bits&1) bad+=d;
        else bad-=d;
    }
    return n-bad;
}

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll  l,r;
        cin>>l>>r;
        cout<<check(r)-check(l-1)<<endl;
        
    }
    
    
}