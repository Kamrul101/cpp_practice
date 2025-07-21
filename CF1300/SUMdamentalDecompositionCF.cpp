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
        ll n,k;
        cin>>n>>k;
        int bits=__builtin_popcountll(k);
        if(n<=bits){
            cout<<k<<endl;
            continue;
        }
        if((n-bits)%2==0)cout<<k+n-bits<<endl;
        else{
            if(k>1){
                cout<<k+n-bits+1<<endl;
                continue;
            }
            if (k==1){
                cout<<n+3<<endl;
                continue;
            }
            else{
                if(n==1){
                    cout<<-1<<endl;
                    continue;
                }
                else cout<<n+3<<endl;
            }
        }

    }
    
}