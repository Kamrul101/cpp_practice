#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 1e5+123;
// int dp[mx]={0};


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
       ll a, b;
       cin>>a>>b;
       if(a==b) cout<<0<<" "<<0<<endl;
       else{
        ll g  = abs(a-b);
       ll p = min(a%g , g-a%g);
       cout<<g<<" "<<p<<endl;
       }
       
    }
    
}
