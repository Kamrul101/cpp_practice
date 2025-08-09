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
bool fair(ll n){
    ll val = n;
    while(val>0){
        ll x = val%10;
        if(x>0 && n%x!=0) return false;
        val/=10;
    }
    return true;
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        while(1){
            bool check = fair(n);
            if(check) {
                cout<<n<<endl;
                break;
            }
            n++;
        }
        
    }
    
}