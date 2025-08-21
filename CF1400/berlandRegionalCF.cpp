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
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        vector<vector<ll>>v(n+1);
        for(int i=0;i<n;i++){
            int x = a[i];
            int y = b[i];
            v[x].push_back(y);
        }
        // vector<vector<ll>preSum;
        // sort(v.begin(),v.end());
        // int sz = INT_MAX;
        map<int,ll> mp;
        for(auto u:v){
            if(u.size()>0){
                int sz = u.size();
                vector<ll> pre(sz+1,0);
                sort(u.rbegin(),u.rend());
                for(int i=1;i<=sz;i++){
                    pre[i] = pre[i-1]+u[i-1];
                }
                for(int i=1;i<=sz;i++){
                    ll sum = 0;
                    if(sz%i==0){
                        sum+=pre[sz];
                    }
                    else{
                        int x = sz%i;
                        sum+= pre[sz-x];
                    }
                    mp[i] +=sum;
                }
            }
        }
        for(auto u:mp) cout<<u.second<<" ";
        if(mp.size()<n){
            int x = mp.size();
            for(int i=x;i<n;i++) cout<<0<<" ";
        }
        cout<<endl;
        
    }
    
}