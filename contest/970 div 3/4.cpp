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
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            x--;
            v.push_back(x);
        }
        string s;
        cin>>s;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(v[i]!=-1){
                vector<int> t;
                int cnt=0;
                int x=i;
                while(v[x]!=-1){
                    t.push_back(x);
                    if(s[x]=='0') cnt++;
                    int n=v[x];
                    v[x]=-1;
                    x=n;
                }
                for(auto u:t){
                    ans[u] = cnt;
                }
            }
        }
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<endl;
 
    }
    
}