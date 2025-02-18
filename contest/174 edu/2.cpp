#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =701;
int a[mx][mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        map<int,int>mp;
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++){
                cin>>a[i][j];
                if(mp.find(a[i][j])==mp.end()){
                    mp[a[i][j]]=1;
                }
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++){
                int x = a[i][j];
                if(i+1<n && a[i+1][j]==x) mp[x]=2;
                if(j+1<m && a[i][j+1]==x) mp[x]=2;
            }
        }
        int ans=0,mx=1;
        for (auto u : mp) {
            ans+=u.second;
            if(u.second==2) mx=2;
        }
        cout<<ans-mx<<endl;
        
    }
    
}