#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,mn = INT_MAX;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mn = min(a[i],mn);
        }
        int cnt=0;
        bool check = true;
        for(int i=0;i<n;i++){
            if(a[i]==mn) cnt++;
            if((a[i]&mn) != mn){
                cout<<0<<endl;
                check = false;
                break;
            }
        }
        if(!check) continue;
        ll fact=1;
        for(int i=1;i<n-1;i++) fact = (fact*i)%MOD;
        ll ans = (1LL * cnt*(cnt-1))%MOD;
        ans = (fact*ans)%MOD;
        cout<<ans<<endl;
        
    }
    
}