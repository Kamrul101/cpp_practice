#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 1e5+123;
// int dp[mx]={0};

//recursive way 
int fibRec(int n){
    if(n<=1) return n;
    return fibRec(n-2)+fibRec(n-1);
}
//iterative way
int fib(int n){
    int t1 = 0, t2 = 1,s;
    if(n<=1) return n;
    for(int i=2;i<=n;i++){
        s = t1 + t2;
        t1 = t2;
        t2 = s;
    }
    return s;
}

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fib(n)<<endl;
        
    }
    
    
}
