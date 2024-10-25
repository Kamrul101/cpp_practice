#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
ll a[mx];
// ll preSum[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll preSum = 0;
        int ans = 0;
        map<ll, ll> mp;
        mp[0] = 0;
        for (int i = 0; i < n; i++)
        {
            preSum += a[i];
            if(mp.find(preSum) != mp.end()){
                ans++;
                mp.clear();
                mp[0]= 1;
                preSum = 0;
            }
            mp[preSum] = 1;
        }
        cout<<ans<<endl;
    }
    
}
