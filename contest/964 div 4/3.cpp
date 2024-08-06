#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

// const int mx = 1e5+123;
// int a[mx];

int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        vector<pair<int,int>> v;
        while(n--){
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        
        bool ans = false;
        if(v[0].first - 0 >= s){
            cout<<"YES"<<endl;
            ans = true;
        }
        
        if(!ans){
            for(int i=1;i<v.size();i++){
                if(v[i].first - v[i-1].second >= s){
                    cout<<"YES"<<endl;
                    ans = true;
                    break;
                }
            }
        }
        if(!ans){
            if(m-v[v.size()-1].second >= s){
                cout<<"YES"<<endl;
                ans = true;
            }
        }
        if(!ans) cout<<"NO"<<endl;

    }
    
   
    
}