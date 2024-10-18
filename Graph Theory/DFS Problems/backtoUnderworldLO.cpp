#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx =2e4+123;
bool vis[mx] = {0};
bool isNode[mx]={0};
vector<int> adjMat[mx];
int cnt, cnt1;

void dfs(int v, int col){
    vis[v] = 1;
    if(col==1) cnt1++;
    cnt++;
    int temp;
    if(col==1) temp=2;
    else temp=1;
    for(auto u:adjMat[v]){
        if(!vis[u]){
            dfs(u, temp);
        }
    }
}

void clean(int x){
    for(int i = 0; i < x; i++){
        adjMat[i].clear();
        isNode[i]=0;
        vis[i] = 0;
    }
}

int main() {
    optimize();
    int t;
    cin>>t;
    for(int c=1;c<=t;c++){
        int m;
        cin>>m;
        for(int i=1;i<=m;i++){
            int x , y;
            cin>>x>>y;
            adjMat[x].push_back(y);
            adjMat[y].push_back(x);
            isNode[x]=1;
            isNode[y]=1;
        }
        int ans=0;
        for(int i=1;i<=2e4;i++){
             if(isNode[i] && !vis[i]){
                cnt=0,cnt1=0;
                dfs(i,1);
                ans+=max(cnt1,cnt-cnt1);
             }
        }
        cout<<"Case "<<c<<": "<<ans<<endl;
        clean(mx);

    }
       
}