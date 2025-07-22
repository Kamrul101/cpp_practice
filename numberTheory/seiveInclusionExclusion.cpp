#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

/*
For a number which is not divisible
or dont have factors 2,3,5,7
*/

ll count(ll n){
    vector<int> prime = {2,3,5,7};
    ll bad  = 0;
    for(int mask = 1;mask<(1<<4);mask++){
        ll val = 1;
        int bits = __builtin_popcount(mask);
        for(int i=0;i<4;i++){
            if(mask&(1<<i)){
                val*=prime[i];
            }
        }
        ll divisible = n/val;
        if(bits&1) bad+=divisible; // add value
        else bad-=divisible; // substract double counted
    }
    return n-bad;
}

int main() {
    optimize();
    ll n;
    cin>>n;
    cout<<count(n)<<endl;
    
    //for range
    ll l,r;
    cin>>l>>r;
    cout<<count(r)-count(l-1)<<endl;
    
}