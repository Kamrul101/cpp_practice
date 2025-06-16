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
        int k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;
        if(k<a && k<b) {
            cout <<0<< endl;
            continue;
        }
        if(x>y){
            swap(a,b);
            swap(x,y);
        }
        ll cnt = 0;
        if(k>=a){
            int x1=(k-a)/x + 1;
            cnt+=x1;
            k-= x1*x;
        }
        if(k>=b){
            ll x1 = (k-b)/y + 1;
            cnt+=x1;
        }
        cout<<cnt<<endl;
    }
    
}