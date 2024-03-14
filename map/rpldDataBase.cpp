#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int m,n;
        cin>>m>>n;
        map<pair<int,int>,bool> vis;
        bool visited = 1;
        while(n--){
            int a,b;
            cin>>a>>b;
            if(vis[{a,b}]) visited = 0;
            vis[{a,b}] = 1;
        }
        if(visited == 1) cout<<"Scenario #"<<i<<": possible"<<endl;
        else cout<<"Scenario #"<<i<<": impossible"<<endl;
    }
}