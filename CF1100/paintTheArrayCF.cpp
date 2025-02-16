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
        cin>>n;
        vector<ll> v1,v2;
        for(int i=1;i<=n;i++){
            ll x;
            cin>>x;
            if(i%2) v1.push_back(x);
            else v2.push_back(x);
        }
        ll ans1 = 0,ans2=0;
        for(auto u:v1) ans1 = __gcd(ans1,u); 
        for(auto u:v2) ans2 = __gcd(ans2,u); 
        bool c1 = true,c2 = true;
        for(auto u:v1){
            if(u%ans2==0){
                c1 = false;
            }
        }
        for(auto u:v2){
            if(u%ans1==0){
                c2=false;
            }
        }
        if(!c1 && !c2){
            cout<<0<<endl;
        }
        else if(c1) cout<<ans2<<endl;
        else cout<<ans1<<endl;
        
    }
    
}