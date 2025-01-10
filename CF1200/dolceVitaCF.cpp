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
        int n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        ll sum = 0,preDay=-1,ans=0;
        for(int i=0;i<n;i++){
            ll val;
            sum+=v[i];
            if(sum>k) break;
            if(k-sum>=0){
                val = ((k-sum)/(i+1))+1;
                ans+=val;
            }
        }
        cout<<ans<<endl;
        
    }
    
}