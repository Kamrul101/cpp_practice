#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx],b[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int mx = -1, mn = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i] = a[i];
            mx = max(a[i],mx);
            mn = min(a[i],mn);
        }
        if(mx == a[k-1]){
            cout<<n-1<<endl;
            continue;
        }
        if(mn == a[k-1]){
            cout<<0<<endl;
            continue;
        }
        int idx=-1;
        for(int i=0;i<k;i++){
            if(a[i]>a[k-1]){
                swap(a[i],a[k-1]);
                idx = i;
                break;
            }
        }
        swap(b[0],b[k-1]);
        int ans=0;
        if(idx!=-1){
            int cnt=0;
            for(int i=idx;i<k;i++){
                if(a[idx]<a[i]) break;
                cnt++;
            }
            if(idx==0){
                cnt--;
            }
            ans = max(cnt,ans);
        }
        // cout<<ans<<endl;
        int cnt=0;
        for(int i=1;i<n;i++){
            if(b[0]<b[i]) break;
            cnt++;
        }
        ans = max(cnt,ans);
        cout<<ans<<endl;
    }
    
}