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
        ll n,l,r;
        cin>>n>>l>>r;
        vector<int>v(n+1);
        for(int i=0;i<=n;i++) v[i] = i;
        v[r] = v[l-1];
        for(int i=n;i>=1;i--){
            v[i]^=v[i-1];
        }
        for(int i=1;i<=n;i++) cout<<v[i]<<" \n"[i==n];
        
        // for(int i=1;i<=30;i++){
        //     cout<<(i^(i-1))<<" ";
        // }
    }
    
}