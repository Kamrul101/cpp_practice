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
        ll n,m,k;
        cin>>n>>m>>k;

        ll l=1,h=m, ans=-1;
        while(l<=h){
            ll mid = (l+h)/2;
            ll x = ((m/(mid+1)*mid) + m%(mid+1)) * n;
            if(x>=k){
                ans = mid;
                h = mid -1;
            }
            else l = mid+1;
        }
        cout<<ans<<endl;
        
    }
    
}