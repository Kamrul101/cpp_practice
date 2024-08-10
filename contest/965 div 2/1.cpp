#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
      int x,y,k;
      cin>>x>>y>>k;
        vector<pair<int,int>> v;
        if(k%2==1){
            v.push_back({x,y});
        }
        for(int i=1;i<=k/2;i++){
            v.push_back({x+i,y+i});
        }
        for(int i=1;i<=k/2;i++){
            v.push_back({x-i,y-i});
        }
        for(auto u :v){
            cout<<u.first<<" "<<u.second<<endl;
        }
      
    } 
}