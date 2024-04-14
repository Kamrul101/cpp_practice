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
        ll n,ans;
       cin>>n;
       for(int i=2;i<30;i++){
        ll val = powl(2,i)-1;
        if(n%val==0){
            ans = n/val;
       cout<<ans<<endl;
            break;
        }
       }

    }

}
