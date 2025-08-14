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
        int n,k;
        cin>>n>>k;
        map<ll,ll>mp1,mp2;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            ll val1 = x%k;
            ll req = min(val1,k-val1);
            mp1[req]++;
        }
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            ll val1 = x%k;
            ll req = min(val1,k-val1);
            mp1[req]--;
        }
        bool check= true;
        for(auto u:mp1){
            if(u.second!=0){
                cout<<"NO"<<endl;
                check = false;
                break;
            }
        }
        if(check) cout<<"YES"<<endl;
        
    }
    
}