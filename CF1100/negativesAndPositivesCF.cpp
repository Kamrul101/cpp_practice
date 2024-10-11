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
        cin>>n;
        vector<ll> v;
        ll sum=0;
        int i,cntNeg=0;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x<0){
                x*=-1;
                cntNeg++;
            }
            sum+=x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        
        if(cntNeg%2) sum-=2*v[0];
        cout<<sum<<endl;
        
    }
    
}