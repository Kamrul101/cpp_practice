#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e4+123;
int a[mx],b[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        /*
            //Brute Force//
        
            for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
            vector<int> vis(n+5,1),ans;

            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(i!=j && (a[j]<=a[i] && b[i]<=b[j])) vis[i] = 0;
                }
                if(vis[i]) ans.push_back(i);
            }
        */
       
        vector<pair<pair<int,int>,int>>vpp(n);
        for(int i=0;i<n;i++){
            int x, y;
            cin>>x>>y;
            vpp[i].first.first = x;
            vpp[i].first.second = -y;
            vpp[i].second = i+1;
        }
        sort(vpp.begin(),vpp.end());
        vector<int> ans;

        int mn = -1;
        for(int i=0;i<n;i++){
            if(vpp[i].first.first>mn){
                mn = vpp[i].first.first;
                int idx = vpp[i].second;
                ans.push_back(idx);
            }
        }
        sort(ans.begin(),ans.end());
        cout<<ans.size()<<endl;
        for(auto u:ans) cout<<u<<" \n"[u==ans.back()];
        
    }
    
}