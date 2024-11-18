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
        ll n,m,L;
        cin>>n>>m>>L;
        vector<array<ll,3>> v;
        for(int i=0;i<n;i++){
            ll l,r;
            cin>>l>>r;
            v.push_back({l,r,0});
        }
        for(int i=0;i<m;i++){
            ll x,y;
            cin>>x>>y;
            v.push_back({x,y,1});
        }
        sort(v.begin(),v.end());
        int ans=0;
        ll p=1;
        priority_queue<ll> q;
        bool check= true;
        for(auto u:v){
            if(u[2]==1){
                q.push(u[1]);
            }
            else{
                ll len = u[1]-u[0]+2;
                if(len>p){
                    while (!q.empty()){
                        if(p>=len) break;
                        p+=q.top();
                        q.pop();
                        ans++;
                    }
                }
                if(len>p){
                    cout<<-1<<endl;
                    check = false;
                    break;
                }  
            }
            if(!check) break;
        }
        if(check) cout<<ans<<endl;
        
        
    }
    
}