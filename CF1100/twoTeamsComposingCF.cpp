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
       vector<int> v(n);
       map<int,int> mp;
       for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
       }
       int mx = -1;
       for(auto u:mp){
            if(u.second>mx) mx = u.second;
       }
       sort(v.begin(),v.end());
       int sz = unique(v.begin(),v.end()) - v.begin();
       cout<<max(min(mx-1,sz), min(mx,sz -1))<<endl;
        
    }
    
}