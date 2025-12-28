#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll sum = 0;

        vector<ll>v(n+1,0);

        for(ll i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];

            v[i] = 2*i - a[i];
        }

        ll mxSum = 0,val = 0;

        for(int i=1;i<=n;i++){
            val+=v[i];
            if(val<0) val = 0;
            mxSum = max(val,mxSum);
        }
        cout<<sum+mxSum<<endl;
    }
    
}