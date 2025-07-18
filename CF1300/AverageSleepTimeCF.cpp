#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx];
int main() {
    optimize();
    int n,k;
    cin>>n>>k;
    ll sum = 0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    ll runSum=0;
    deque<ll> dq;
    for(int i=0;i<k;i++) {
        runSum+=a[i];
        dq.push_back(a[i]);
    }
    for(int i=k;i<n;i++){
        sum+=runSum;
        ll x = dq.front();
        dq.pop_front();
        runSum-=x;
        runSum+=a[i];
        dq.push_back(a[i]);
    }
    sum+=runSum;
    ld ans = (1.00*sum)/(1.00*(n-k+1));
    cout<<fixed<<setprecision(10)<<ans<<endl;
    
}