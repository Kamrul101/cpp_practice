#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 1e5+123;
// int dp[mx]={0};


int main() {
    optimize();
    ll n,k;
    cin>>n>>k;
    ll mx = INT32_MIN;
    while(n--){
        ll f,t;
        cin>>f>>t;
        if(t>k) f = f - (t-k);
        mx = max(mx,f);
    }
    cout<<mx<<endl;
    
}
