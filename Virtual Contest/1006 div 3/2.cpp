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
        string s;
        cin>>s;
        if(s.size()<3) cout<<0<<endl;
        else{
            int cnt1=0,cnt2=0;
            for(auto u:s){
                if(u=='-') cnt1++;
                else cnt2++;
            }
            int x = (cnt1+1)/2;
            int y = cnt1 - x;
            ll ans = 1LL*x*y*cnt2;
            cout<<ans<<endl;
        }
        
    }
    
}