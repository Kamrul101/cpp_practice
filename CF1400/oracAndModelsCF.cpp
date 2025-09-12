#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        vector<int> v(n+1,1);
        for(int i=1;i<=n;i++){
            for(int j=i*2;j<=n;j+=i){
                if(a[i]<a[j]) v[j] = max(v[j],v[i]+1);
            }
        }
        int ans = 0;
        for(int i=1;i<=n;i++) ans = max(ans,v[i]);
        cout<<ans<<endl;
        
    }
    
}