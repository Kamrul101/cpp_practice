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
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];  
        }
        int sz = unique(v.begin(),v.end())-v.begin();
        int ans = sz;
        for (int i=0; i+2<sz; ++i) {
            if(v[i] < v[i + 1] && v[i + 1] < v[i + 2]){
                ans--;
                continue;
            }
            if(v[i] > v[i + 1] && v[i + 1] > v[i + 2]){
                ans--;
                continue;
            }
            
        }
        cout<<ans<<endl;

        
    }
    
}