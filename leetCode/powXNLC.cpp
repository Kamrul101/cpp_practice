#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double  ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 1e5+123;
// int dp[mx]={0};

ld power(ld m, int n){
        double res;
        long long exp = static_cast<long long>(n); // Use static_cast to convert n to long long
    long long t = exp;
        if(exp<0) {
            exp*=-1;

        }
        if(exp==0) return 1;
        if(exp%2==0){
            res =  power(m*m,exp/2);
        }
        else res = m*power(m*m,(exp-1)/2);
        if(t<0) res = 1/ res;
        
    return res;
   
    
    
}


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ld m;
        int n;
        cin>>m>>n;
        cout<<power(m,n)<<endl;
    }
    
    
}
