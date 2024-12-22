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
        ll n,a,b,c;
        cin>>n>>a>>b>>c;
        vector<ll> v={a,b,c};
        ll sum = a+b+c;
        ll ans = n/sum;
        ll rem=n%sum;
        ans*=3;
        for(int i=0;i<3;i++){
            if(rem<=0) break;
            rem-=v[i];
            ans++;
        }
        cout<<ans<<endl;
        
    }
    
}