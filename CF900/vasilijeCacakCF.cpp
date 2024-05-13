#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
typedef long long ll ;
const int mx = 2e5+123;
long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n, k, x;
        cin>>n>>k>>x;
        
            ll minSum = (k*(k+1))/2;
            ll maxSum =  (n*(n+1)-(n-k)*(n-k+1))/2;
            if(x>=minSum && x<=maxSum) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        
    }
    
    
}