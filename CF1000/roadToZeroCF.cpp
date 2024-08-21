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
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        ll mn  = min(x,y);
        ll mx = max(x,y);
        ll sum=0;
       
        if(a+a<=b) sum+=(mn+mx)*a;
        else{
        sum+= b*mn;
        sum+= a* (mx-mn);
        }
        cout<<sum<<endl;
    }
    
}