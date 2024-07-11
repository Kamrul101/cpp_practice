#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 1e5+123;
// int a[mx];

int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
        vector<int> a;
        for(int i=n;i>m;i--) a.push_back(i);
        for(int i=1;i<=m;i++) a.push_back(i);
        for(auto u:a) cout<<u<<" ";
        cout<<endl;
    }
    
   
    
}