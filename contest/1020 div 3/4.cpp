#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx],b[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<ll> pre(m+1,n),suf(m+1,-1);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        int j = 0;
        pre[0] = -1;
        for(int i=0;i<n && j<m;i++){
            if(a[i]>=b[j]){
                pre[j+1] = i;
                j++;
            }
        }
        for(auto u:pre) cout<<u<<" ";
        j = m-1;
        suf[m] = n;
        for(int i=n-1;i>=0 && j>=0;i--){
            if(a[i]>=b[j]){
                suf[j] = i;
                j--;
            }
        }
        cout<<endl;
        for(auto u:suf) cout<<u<<" ";
        cout<<endl;
        if(pre[m]<n) cout<<0<<endl;
        else{
            ll ans = INT_MAX;
            for(int i=1;i<=m;i++){
                if(pre[i-1]<suf[i]){
                    cout<<pre[i-1]<<" "<<suf[i]<<" "<<b[i-1]<<endl;
                    ans = min(ans,b[i-1]);
                }
            }
            cout<<(ans==INT_MAX?-1:ans)<<endl;
        }

        
    }
    
}