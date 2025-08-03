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
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        vector<ll> v(n);
        v[0] = k*b;
        s-=k*b;
        if(s<0) cout<<-1<<endl;
        else{
            for(int i=0;i<n;i++){
                ll x = min(k-1,s);
                v[i]+=x;
                s-=x;
            }
            if(s>0) cout<<-1<<endl; 
            else{
                for(int i=0;i<n;i++){
                    cout<<v[i]<<" ";
                }
                cout<<endl;
            }
        }

    }
    
}