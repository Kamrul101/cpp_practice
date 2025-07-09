#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n,l,r,k;
        cin>>n>>l>>r>>k;
        if(n&1LL){
            cout<<l<<endl;
            continue;
        } 
        else if(n==2){
            cout<<-1<<endl;
            continue;
        }
        ll need = 1LL<<(1+__lg(l));
        if(r<need){
            cout<<-1<<endl;
            continue;
        }
        if(k>=n-1){
            cout<<need<<endl;
            continue;
        }
        cout<<l<<endl;
    }
    
}