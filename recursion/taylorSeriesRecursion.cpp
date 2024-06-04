#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 1e5+123;
// int dp[mx]={0};
double taylor(ll x, int n){
    static double p = 1, f =1;
    double res;
    if(n==0) return 1;
    
        res = taylor(x,n-1);
        p*=x;
        f*=n;
        return res+p/f;
    
}


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll x;
        int n;
        cin>>x>>n;
        cout<<setprecision(10)<<taylor(x,n)<<endl;
        
    }
    
    
}
