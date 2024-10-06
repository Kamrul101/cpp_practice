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
int c[mx]={0};
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        ll mx = -1;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            a[i] = x;
            c[x]++;
            if(x>mx){
                mx = x;
            }
        }
        ll mex = 0;
        for(int i=0;i<=mx;i++){
            if(a[i]<1){
                mex = a[i];
                break;
            }
        }
        if(mex==0) cout<<0<<endl;
        else{
            for(int i=0;i<n;i++){
                
            }
        }
        
    }
    
}