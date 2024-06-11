#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 1e5 + 123;
ll preSum[mx];

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n),b(n); 
        
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        ll mx = 0,sum=0,cnt=0;
        for(int i=0; i<n; i++){
            mx = max(mx,a[i]);
            sum+=a[i];
            if(2*mx == sum) cnt++;
        }
        cout<<cnt<<endl;
    }
}
