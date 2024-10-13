#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
// int a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        vector<int> v;
        v.push_back(0);
        for(int i=0;i<n;i++){
           if(s[i]=='R') v.push_back(i+1);
        }
        v.push_back(n+1);
        int ans = 0;
        for(int i=0;i<v.size()-1;i++){
            ans = max(v[i+1]-v[i],ans);
        }
        cout<<ans<<endl; 
        
    }
    
}