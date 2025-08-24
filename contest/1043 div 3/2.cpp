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
        ll x = 10;
        vector<ll> v;
        for(int i=1;i<=18;i++){
            ll val = x+1;
            if(n%val==0){
                v.push_back(n/val);
            }
            x*=10;
        }
        sort(v.begin(),v.end());
        if(v.size()==0){
            cout<<0<<endl;
        }
        else{
            cout<<v.size()<<endl;
            for(auto u:v){
                cout<<u<<" ";
            }
            cout<<endl;
        }
        
    }
    
}