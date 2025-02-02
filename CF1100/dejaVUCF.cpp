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
        ll n,q;
        cin>>n>>q;
        for(ll i=0;i<n;i++) {
            cin>>a[i];
        }
        for(ll i=0;i<q;i++){
            cin>>b[i];
        }
        int c[30]={0};
        for(ll i=0;i<q;i++){
            if(c[b[i]]) continue;
            c[b[i]]++;
            for(int j=0;j<n;j++){
                if(a[j]%(1<<b[i])==0){
                    a[j]+=(1<<b[i]-1);
                }
            }
        }   
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
    
}