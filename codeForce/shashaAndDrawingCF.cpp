#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
       ll n,k;
       cin>>n>>k;
       int d = 4*n -2;
       if(d==k) cout<<2*n<<endl;
        else cout<<((k%2!=0 ? ((k+1)/2): k/2))<<endl;
       
    }

}
