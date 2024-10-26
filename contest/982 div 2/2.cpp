#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 2005;
ll a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      for(int i=0;i<n;i++) cin>>a[i];
      ll ans = INT_MAX; 
      for(int i=0;i<n;i++){
        ll s = 0;
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]) s++;
        }
        ans =  min(ans,s+i);
      }
      cout<<ans<<endl;
        
    }
    
}