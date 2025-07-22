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
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        ll mn = a[0];
        for(int i=0;i<n-1;i++){
            mn = min(mn,abs(a[i]-a[i+1]));
        }
        if(k>=3) cout<<0<<endl;
        else if(k==1){
            cout<<mn<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    ll x = a[j]-a[i];
                    int idx = lower_bound(a.begin(),a.end(),x)-a.begin();
                    if(idx>0) mn = min(mn,x-a[idx-1]); 
                    if(idx<n) mn = min(mn,a[idx]-x);
                }
            }
            cout<<mn<<endl;
        }

    }
    
}