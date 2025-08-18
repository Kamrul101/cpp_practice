#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
ll checkSum(vector<int>&v){
    sort(v.rbegin(),v.rend());
    int n=v.size();
    ll sum = 0;
    for(int i=0,j=n-1;i<n;i++,j-=2){
        sum+= 1LL * j * v[i];
    }
    return sum;
}
int main() {
    optimize();
    int t=1;
    // cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        vector<vector<int>>vx(100001);
        vector<vector<int>>vy(100001);
        int mx =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                a[i][j]--;
                vx[a[i][j]].push_back(i);
                vy[a[i][j]].push_back(j);
                mx = max(a[i][j],mx);
            }
        }
        ll tot=0;
        for(int i=0;i<=mx;i++){
            tot+=checkSum(vx[i]);
            tot+=checkSum(vy[i]);
        }
        cout<<tot<<endl;
    }
    
}