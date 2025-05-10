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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(m);
    for(int i=0;i<m;i++) cin>>v[i];
    int x;
    cin>>x;
    int ans = 0;
    for(int i=0;i<m;i++){
        int cnt = __builtin_popcount(x^v[i]);
        if(cnt<=k) ans++;
    }
    cout<<ans<<endl;
    
}