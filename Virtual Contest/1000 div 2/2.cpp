#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx],b[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        l--;
        r--;
        ll sum=0,sum1=0,sum2=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            b[i] = a[i];
        }
        vector<ll> v1,v2;
        for(int i=l;i<n;i++) {
            v1.push_back(a[i]);
        }
        for(int i=0;i<=r;i++) {
            v2.push_back(a[i]);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for (int i=0;i<(r - l + 1);i++) {
            sum1+=v1[i];
        }
        for (int i=0;i<(r-l+1);i++) {
            sum2+=v2[i];
        }
        cout<<min(sum1,sum2)<<endl;
    }
    
}