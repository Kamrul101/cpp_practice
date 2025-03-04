#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx],b[mx],c[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        ll mx = INT_MIN;
        for(int i=0;i<n;i++) {
            cin>>b[i];
            mx = max(a[i]-b[i],mx);
            c[i] = (a[i]-b[i]);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(c[i]==mx){
                cnt++;
            }
        }
        cout<<cnt<<endl;
        for(int i=0;i<n;i++){
            if(c[i]==mx) cout<<i+1<<" ";
        }
        cout<<endl;
        
        
    }
    
}