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
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        vector<int> v;
        for(auto u:mp) v.push_back(u.second);
        sort(v.rbegin(),v.rend());
        int ans = v[0],prev = v[0];
        for(int i=1;i<v.size();i++){
            if(v[i]>=prev){
                v[i] = max(prev-1,0);
            }
            prev = v[i];
            ans+=v[i];
        }
        cout<<ans<<endl;
    }
    
}