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
        vector<int> v(n);
        int sum = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                v[i] = 1;
                sum+=1;
            }
            else{
                v[i] = -1;
                sum-=1;
            }
        }
        if(sum==0){
            cout<<0<<endl;
            continue;
        }

        /*
            Minimum size subarray sum equal k (negative)
        */

        vector<int> preSum(n+1,0);

        for(int i=1;i<=n;i++) preSum[i] = v[i-1]+preSum[i-1];

        map<int,int>mp;

        int ans = n;
        mp[0] = 0;
        for(int i=1;i<=n;i++){
            int val = preSum[i] - sum;
            if(mp.find(val)!=mp.end()){
                int len = i - mp[val];
                ans = min(ans,len);
            }
            mp[preSum[i]] = i;
        }


        if(ans==n) ans = -1;
        cout<<ans<<endl;
        
        
    }
    
}