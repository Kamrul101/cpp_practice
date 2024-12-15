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
        set<int>s;
        bool vis[mx] = {0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        vector<int> v;
        for(int i=0;i<n;i++){
            if(!vis[a[i]] && mp[a[i]]>0){
                v.push_back(a[i]);
                vis[a[i]]=1;
            }
        }
        for(int i=1;i<=n;i++){
            if(!vis[i]) v.push_back(i);
        }
        for(auto u:v){
            cout<<u<< " ";
        }
        cout<<endl;
    }
    
}