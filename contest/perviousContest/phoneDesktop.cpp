#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ans = m/2;
        m=m%2;
        n = max(0, n- ans*7);
        if(m){
            ans++;
            n=max(0, n-11);
        }
        if(n) ans+=n/15 + !!(n%15);
        cout<<ans<<endl;
    }
}
