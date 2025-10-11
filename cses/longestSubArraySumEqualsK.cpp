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
        int n,k;
        cin>>n>>k;
        vector<int> v(n),preSum(n+1,0);
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=1;i<=n;i++){
            preSum[i] = preSum[i-1] + v[i-1];
        }

        map<int,int> mp;
        
        mp[0] = 0; //for equal to k
        int mxLen = 0;
        for(int i=1;i<=n;i++){
            int val = preSum[i] - k;
            if(mp.find(val)!=mp.end()){
                mxLen = max(mxLen, i-mp[val]);
            }
            if(mp.find(preSum[i])==mp.end()) mp[preSum[i]] = i;
        }
        cout<<mxLen<<endl;
    }
    
}