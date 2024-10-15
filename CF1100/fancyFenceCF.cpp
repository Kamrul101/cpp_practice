#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
       double n;
       cin>>n;
       bool ans = false;
       for(int i=3;i<=360;i++){
            double x = i-2;
            x*=180;
            x/=i;
            if(x==n) {cout<<"YES"<<endl;
                ans = true;
                break;
            }
       }
        if(!ans) cout<<"NO"<<endl;
    }
    
}