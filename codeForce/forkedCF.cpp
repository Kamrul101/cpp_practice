#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
       int a,b,xk,yk,xq,yq;
       cin>>a>>b>>xk>>yk>>xq>>yq;
       vector<ll> dx={-a,-a,a,a,b,b,-b,-b};
       vector<ll> dy={-b,b,b,-b,-a,a,a,-a};
       set<pair<int,int>>sx1,sx2;

       for(int i=0;i<8;i++){
        sx1.insert({xk+dx[i],yk+dy[i]});
       }
       for(int i=0;i<8;i++){
        sx2.insert({xq+dx[i],yq+dy[i]});
       }
       int ans=0;
       for(auto u:sx1){
        if(sx2.find(u)!=sx2.end()) ans++;
       }
       cout<<ans<<endl;
    }

}
