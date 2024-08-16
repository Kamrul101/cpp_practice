#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;

int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sumA=0,sumB=0,minA=LONG_LONG_MAX,minB=LONG_LONG_MAX;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            sumA+=x;
            minA=min(minA,x);
        }
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            sumB+=x;
            minB=min(minB,x);
        }
        sumA+=(minB*n);
        sumB+=(minA*n);
        if(sumA<sumB) cout<<sumA<<endl;
        else cout<<sumB<<endl;
        
     
    } 
}