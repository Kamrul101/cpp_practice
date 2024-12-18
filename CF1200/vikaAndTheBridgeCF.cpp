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
        vector<int> last(k,-1);
        vector<vector<int>> dis(k);
        for(int i=0;i<n;i++){
            cin>>v[i];
            v[i]--;
            dis[v[i]].push_back(i-1-last[v[i]]);
            last[v[i]] = i; 
        }
        int ans = n;
        for(int i=0;i<k;i++){
            dis[i].push_back(n-1-last[i]);
            sort(dis[i].rbegin(),dis[i].rend());
            int res = dis[i][0]/2;
            if(dis[i].size()>1){
                res = max(res,dis[i][1]);
            }
            ans = min(ans,res);
        }
        cout<<ans<<endl;


        
    }
    
}