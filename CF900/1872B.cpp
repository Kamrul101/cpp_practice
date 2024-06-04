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
       int n;
       cin>>n;
       
       int k = INT_MAX;
       while(n--){
        int d,s;
        cin>>d>>s;
         k = min(k, d+(s-1)/2 );
       }
       cout<<k<<endl;
    }
    
    
}
