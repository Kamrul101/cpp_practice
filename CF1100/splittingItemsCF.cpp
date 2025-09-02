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
        int n;
        ll k;
        cin>>n>>k;
        vector<ll> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.rbegin(),v.rend());
        ll sum1 = 0, sum2=0;
        for(int i=1;i<n;i+=2){
            ll diff = v[i-1] - v[i];
            if(diff) {
                v[i] += min(diff,k);
                k-=min(diff,k);
            }
        }
        for(int i=0;i<n;i++){
            if(i%2==0) sum1+=v[i];
            else sum2+=v[i];
        }
        cout<<sum1-sum2<<endl;
    }
    
}