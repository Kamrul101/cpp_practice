#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx =1012;
bool vis[mx][mx] = {0};
bool isNode[mx]={0};
char grid[mx][mx];

int n,m;

int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};

bool isValid (int x, int y){
    if(x<1 || x>n || y<1 || y>m){
        return false;
    }
    if(vis[x][y] || grid[x][y]!='.') return false;
    return true;
}
void dfs(int x, int y){
    vis[x][y] = 1;
    for(int i=0;i<4;i++){
        if(isValid(x+dx[i],y+dy[i])){
            dfs(x+dx[i],y+dy[i]);
        }
    }
}

int main() {
    optimize();
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>grid[i][j];
        }
    }
    
    int cnt = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(grid[i][j]=='.' && !vis[i][j]){
                cnt++;
                dfs(i,j);
            }
        }
    }

    cout<<cnt<<endl;  
}