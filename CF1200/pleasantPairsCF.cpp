#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<ll,ll>> v;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            v.push_back({x,(i+1)*1LL});
        }
        sort(v.begin(),v.end());
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(v[i].first * v[j].first>2*n) break;
                if(v[i].first * v[j].first==v[i].second + v[j].second){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
        
    }
    
}