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
        vector<int>v;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        ll ans = 0;
        for(int i=1;i<=n;i++){
            if(a[i]>=i) continue;
            ans+= (long long)(lower_bound(v.begin(), v.end(), a[i]) - v.begin());
		    v.push_back(i);
        }
        cout<<ans<<endl;
        
    }
    
}