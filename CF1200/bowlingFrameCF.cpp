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
        ll w,b;
        cin>>w>>b;
        
        ll l = 0, h = w+b;

        ll ans;

        while(l<=h){
            ll mid = l+(h-l)/2;
            if((mid*(mid+1)/2)<= w+b){
                ans = mid;
                l = mid + 1;
            }
            else h = mid - 1;
        }
        cout<<ans<<endl;
        
    }
    
}