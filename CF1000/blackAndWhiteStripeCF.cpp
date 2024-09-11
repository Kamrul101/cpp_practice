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
        string s;
        cin>>s;
        vector<int> v(n+1,0);
        for(int i=1;i<=s.size();i++){
            v[i] = v[i-1] + int(s[i-1]=='W');
        }
        int ans = INT_MAX;
        for(int i=k;i<=n;i++){
            ans = min (ans, v[i]-v[i-k]);
        }
        cout<<ans<<endl;
        
    }
    
}