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
int pre[20][200001];
int main() {
    optimize();
    for(int bit=0;bit<20;bit++){
        for(int j=1;j<=200000;j++){
            pre[bit][j] = pre[bit][j-1] + ((j>>bit) & 1);
        }
    }
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int ans = 0;
        for(int bit=0;bit<20;bit++){
            ans = max(ans,pre[bit][r]-pre[bit][l-1]);
        }
        ans = r-l+1-ans;
        cout<<ans<<endl;
    }
    
}