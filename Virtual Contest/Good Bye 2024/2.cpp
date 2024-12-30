#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int cnt[mx*2];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> v;
        map<pair<int,int>,int>mp;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
            if(x==y) mp[{x,y}]++;
        }
        mem(cnt,0);
        for(int i=1;i<=2*n;i++){
            if(mp.find({i,i})== mp.end()){
                cnt[i]++;
            }
        }
        for(int i=1;i<=2*n;i++) cnt[i]+=cnt[i-1];
        for(auto u:v){
            int l = u.first, r = u.second;
            if(l==r){
                if(mp[{l,r}]==1) cout<<1;
                else cout<<0;
            }
            else{
                int x = cnt[r] - cnt[l-1];
                if(x) cout<<1;
                else cout<<0;
            }
        }
        cout<<endl;
        
    }
    
}