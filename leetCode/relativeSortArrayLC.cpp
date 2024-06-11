#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 5e5 + 123;
// ll a[mx];

int main()
{
    optimize();
    int n,m;
    cin>>n>>m;
    vector<int> v(n),a(m),rem;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    for(int i=0;i<m;i++){
        cin>>a[i];  
    }
    for(int i=0;i<m;i++){
         
         int x = mp[a[i]];
        for(int j=0;j<x;j++){
            cout<<a[i]<<" ";
            mp[a[i]]--;
        }
    }
    
    for(auto u: mp){
        if(u.second>0){
            for(int i=0;i<u.second;i++) cout<<u.first<<" ";
        }
    }
    
}
