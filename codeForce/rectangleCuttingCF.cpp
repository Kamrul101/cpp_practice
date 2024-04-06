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
       ll a,b;
       cin>>a>>b;
       if((a%2==0&&2*b!=a)||(b%2==0&&2*a!=b)){
        cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;
       
       
       
    }

}
