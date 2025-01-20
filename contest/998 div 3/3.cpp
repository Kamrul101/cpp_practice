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
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int ans = 0;
        for(auto u:mp){
            int x = k - u.first;
            if(mp.count(x)){
                int y = min(u.second,mp[x]);
                if(u.first==x) y/=2;
                ans+=y;
                mp[u.first]-=y;
                mp[x]-=y;
            }
        }
        cout<<ans<<endl;
        
    }
    
}