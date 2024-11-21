#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx],b[mx];
int n;
bool ans;
void check(int x){
    int m=0;
    for(int i=1;i<=n;i++){
        if(a[i]!=x){
            m++;
            b[m] = a[i];
            
        }
    }
    for(int i=1;i<=m;i++){
        if(b[i]!=b[m-i+1]) return;
    }
    ans = true;
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
      cin>>n;
      for(int i=1;i<=n;i++) cin>>a[i];
      ans = true;
      for(int i=1;i<=n;i++){
        if(a[i]!=a[n-i+1]){
            ans = false;
            check(a[i]);
            check(a[n-i+1]);
            break;
        }
      }
      if(ans) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;  
    }
    
}