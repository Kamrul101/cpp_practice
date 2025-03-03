#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(i%2==0) a[i]*=-1;
        }
        map<ll,ll> mp;
        mp[0] = 1;
        bool ans=false;
        ll preSum[n+1] = {0};
        for(int i=1;i<=n;i++){
            preSum[i] = preSum[i-1] + a[i] ;
        }
        for(int i=1;i<=n;i++){
            if(mp[preSum[i]]){
                cout<<"YES"<<endl;
                ans = true;
                break;
            }
            mp[preSum[i]]++;
        }
        if(!ans){
            cout<<"NO"<<endl;
        }
        
    }
    
}