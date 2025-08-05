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
        ll a,b;
        cin>>a>>b;
        ll ans = INT_MAX;
        for(int i=0;i<32;i++){
            /*
                (a/(b+1))<=a/b
                if we increase denominator to a certain
                extend will get less number of division to
                get to zero
            */
            ll cnt = i;
            ll newB = b+i;
            if(newB==1) continue;
            ll n = a;
            while(n){
                n/=newB;
                cnt++;
            }
            ans = min(ans,cnt);
        }
        cout<<ans<<endl;
        
    }
    
}