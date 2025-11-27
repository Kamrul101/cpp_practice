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
        ll x;
        cin>>n>>x;

        vector<ll> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        sort(v.begin(),v.end());

        ll sum1=0,cnt1=0;
        
        int l=0,r=n-1;
        vector<ll> ans;
        while(l<=r){
            if((sum1+v[r])/x>(sum1/x)){
                sum1+=v[r];
                cnt1+=v[r];
                ans.push_back(v[r]);
                r--;
            }
            else{
                sum1+=v[l];
                ans.push_back(v[l]);
                l++;
            }
        }
        cout<<cnt1<<endl;
        for(auto u:ans) cout<<u<<" ";
        cout<<endl;
        
        
    }
    
}