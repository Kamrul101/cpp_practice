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
        ll n;
        cin>>n;
        if(n<7) cout<<"NO"<<endl;
        else{
            bool ans = false;
            for(ll i=2;i<=1000;i++){
                ll s = n;
                ll res = i*i;
                for(ll j=0;j<18;j++){
                    res*=i;
                    if((s*(i-1))+1==res){
                        cout<<"YES"<<endl;
                        ans = true;
                        break;
                    }
                    if(res>n) continue;;
                }
                if(ans) break;

            }
            if(!ans) cout<<"NO"<<endl;
        }
        
    }
    
}