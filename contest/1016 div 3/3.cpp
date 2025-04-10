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
bool is_prime(int x) {
    if(x <= 1){
        return false;
    }
    for(int i=2;i*i<= x; i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n>=2 && k>=2) cout<<"NO"<<endl;
        else if(k==1){
            if(is_prime(n)){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else{
            if(n==1 && k==2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    
}