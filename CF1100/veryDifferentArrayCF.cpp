#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// ll a[mx],b[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
      int n,m;
      cin>>n>>m;
      vector<ll> a(n),b(m);
      for(int i=0;i<n;i++) cin>>a[i];  
      for(int i=0;i<m;i++) cin>>b[i];
      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
      reverse(b.begin(),b.end());
      ll ans= 0;
      int l=0,r=m-1,i=0,j=n-1;
      while(i<=j){
        ll sum1 = abs(a[i]-b[l]);
        ll sum2 = abs(a[j]-b[r]);
        ll mx = max(sum1,sum2);
        ans+=mx;
        if(sum1==mx){
            i++;
            l++;
        }
        else if(sum2==mx){
            j--;
            r--;
        }
      }
      cout<<ans<<endl;  
        
    }
    
}