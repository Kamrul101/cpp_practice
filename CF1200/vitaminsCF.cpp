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
bool cmp(pair<string, int>& a, pair<string, int>& b){ 
    return a.first.size() < b.first.size(); 
}

int main() {
    optimize();
    int t;
    cin>>t;
    map<string,int>mp;
    for(int mask=1;mask<8;mask++){
        string t;
        for(int i=0;i<3;i++){
            if(mask&(1<<i)){
                t+=('A'+i);
            }
        }
        mp[t] = INT_MAX;
    }
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        mp[s] = min(mp[s],n);
    }
    vector<pair<string,int>> v;
    for(auto u:mp){
        if(u.second !=INT_MAX){
            v.push_back({u.first,u.second});
        }
    }
    sort(v.begin(),v.end(),cmp);
    int ans = INT_MAX;
    int sz = v.size();
    for (int mask = 1; mask < (1 << sz); mask++) {
        int cost = 0;
        set<char> collected;
        for (int i = 0; i<sz;i++) {
            if (mask & (1 << i)) {
                cost += v[i].second;
                for (char c : v[i].first) {
                    collected.insert(c);
                }
            }
        }
        if(collected.size() == 3) {
            ans = min(ans, cost);
        }
    }
    if (ans == INT_MAX) cout << -1 << endl;
    else cout << ans << endl;
    
}