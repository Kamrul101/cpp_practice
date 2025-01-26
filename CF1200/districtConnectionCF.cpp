#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =5002;
ll a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,vector<int>>mp;
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]].push_back(i);
            s.insert(a[i]);
        }
        if(s.size()==1) cout<<"NO"<<endl;
        else{
            vector<vector<int>> v;
            for(auto u:mp){
                v.push_back(u.second);
            }
            cout<<"YES"<<endl;
            for(int i=1;i<v.size();i++){
                for(auto u:v[i]){
                    cout<<v[0][0]+1<<" "<<u+1<<endl;
                }
            }
            for(int i=1;i<v[0].size();i++){
                cout<<v[0][i]+1<<" "<<v[1][0]+1<<endl;
            }
        }

        
    }
    
}