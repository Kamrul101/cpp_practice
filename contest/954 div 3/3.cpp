#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 2e5 + 123;
// int a[mx];


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char s[n];
        
        char c[m];
        vector<int> a(m);
        for(int i=0;i<n;i++) cin>>s[i];
        for(int i=0;i<m;i++) cin>>a[i];
        
        for(int i=0;i<m;i++) cin>>c[i];
        sort(a.begin(),a.end());

        sort(c,c+m);
        int sz  = unique(a.begin(),a.end())-a.begin();
        for(int i=0;i<sz;i++){
            s[a[i]-1] = c[i];
        }
        for(int i=0;i<n;i++) cout<<s[i];
        cout<<endl;
        
    }
}