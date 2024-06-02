#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 2e5+123;
// int a[mx];

//normal number
ll fact(ll n){
    if(n==0) return 1;
    else return fact(n-1)*n;
}
//if number is greater than 10^18
ll factLong(ll n){
    if(n==0) return 1;
    else return (factLong(n-1)*n)%MOD;
}

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<factLong(n)<<endl;
    }
    
    
}
