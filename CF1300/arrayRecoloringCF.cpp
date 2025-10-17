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
        vector<ll> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        ll sum = 0;
        if(k>1){
            sort(v.rbegin(),v.rend());
            for(int i=0;i<=k;i++) sum+=v[i];
        }
        else{
            ll x1=-1,x2=-1;
            for(int i=1;i<n;i++) {
                x1 = max(x1,v[i]);
            }
            for(int i=0;i<n-1;i++) {
                x2 = max(x2,v[i]);
            }

            sum = max(x2+v[n-1], x1+v[0]);
        }
        

        cout<<sum<<endl;
        
    }
    
}