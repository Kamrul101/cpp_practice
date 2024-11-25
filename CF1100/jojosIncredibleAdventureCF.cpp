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
        string s,t;
        cin>>s;
        t = s;
        t+=s;
        ll n = s.size();
        bool zero = false;
        ll mx = -1, cnt = 0;
        for(int i=0;i<t.size();i++){
            if(t[i]=='1'){
                cnt++;
            }
            else{
                mx = max(mx,cnt);
                cnt=0;
            }
        }
        mx = max(cnt,mx);
        ll ans = 0;
        if(mx == t.size()) {
            
            ans = n*n;
        }
        else{
            for(int i=1;i<=mx;i++){
                ll x = (mx-i+1) * i;
                ans = max(ans,x);
            }  
        }
        cout<<ans<<endl;
        
    }
    
}