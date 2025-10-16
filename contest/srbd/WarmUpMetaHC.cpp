#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =5e5+123;
int a[mx],b[mx];
int main() {
    optimize();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        int n;
        cin>>n;
        map<int,int>mp;
        bool check = true;
        vector<pair<int,int>>vp(n),vp1;
        map<pair<int,int>,vector<int>>mp1;
        for(int i=0;i<n;i++){
            cin>>vp[i].second;
            mp[vp[i].second] = i+1;
            
        }
        for(int i=0;i<n;i++){
            cin>>vp[i].first;
            if(vp[i].second>vp[i].first) check = false;
            if(vp[i].first>vp[i].second){
                mp1[{vp[i].first,vp[i].second}].push_back(i);
                vp1.push_back({vp[i].first,vp[i].second});
            }
        }
        if(!check){
            cout<<"Case #"<<tc<<": -1"<<endl;
            continue;
        }
        sort(vp1.begin(),vp1.end());
        
        for(auto &u:mp1){
            sort(u.second.rbegin(),u.second.rend());
        }
        vector<pair<int,int>> ans; 
        check = true;
        for(auto u:vp1){
            int x = u.second;
            int y = u.first;
            if(mp.find(y)!=mp.end()){
                int idx1 = mp[y];
                int idx2 = mp1[{y,x}].back();
                mp1[{y,x}].pop_back();
                ans.push_back({idx1,idx2+1});
            }
            else{
                check = false;
                break;
            }
        }
        
        if(!check){
            cout<<"Case #"<<tc<<": "<<-1<<endl;
        }
        else{
            cout<<"Case #"<<tc<<": "<<ans.size()<<endl;
            if(ans.size()!=0){
                for(auto u:ans){
                    cout<<u.first<<" "<<u.second<<endl;
                }
            }
            // cout<<endl;
        }

    }
    
}