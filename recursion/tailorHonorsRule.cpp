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
    static double s;
    
    if(n==0) return s;
    s = 1 + (x*s)/n;
    return taylor(x,n-1);
  
}
double taylorIterative(ll x, int n){
    
    double s;
    for(;n>0;n--){
        s= 1 + (x*s) / n;
    }
    return s;

  
}


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll x;
        int n;
        cin>>x>>n;
        cout<<setprecision(10)<<taylorIterative(x,n)<<endl;
        
    }
    
    
}
