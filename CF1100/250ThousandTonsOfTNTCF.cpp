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
       ll sum = 0;
       vector<ll> v;
       v.push_back(0);
       for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            sum+=x;
            v.push_back(sum);
       }
       ll mx = 0;
       for(int i=1;i<=n;i++){
            vector<ll> ans;
            if(n%i==0){
                for(int j=i;j<=n;j+=i){
                    sum = v[j] - v[j-(i)];
                    ans.push_back(sum);
                }
                sort(ans.begin(),ans.end());
                mx = max(mx, ans[ans.size()-1] - ans[0]);
            }
        }
            
       cout<<mx<<endl; 
        
    }
    
}