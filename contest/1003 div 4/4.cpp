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
        int n,m;
        cin>>n>>m;
        vector<ll> a(n),b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        sort(b.begin(),b.end());
        ll prev = INT_MIN;
        bool check = true;
        for(int i=0;i<n;i++){
            auto it = lower_bound(b.begin(),b.end(),a[i]+prev);
            ll val = (it!=b.end()?*it:-1);
            if(val!=-1){
                if(a[i]<prev){
                    a[i] = val-a[i];
                }
                else a[i] = min(a[i],val-a[i]);
            }
            if(a[i]<prev){
                cout<<"NO"<<endl;
                check= false;
                break;
            }
            prev = a[i];
        }
        if(check) cout<<"YES"<<endl;
        
    }
    
}