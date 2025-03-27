#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =100;
int grid[mx][mx];
bool vis[mx][mx]={0};

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int n,m,col;

bool isValid(int x, int y, int inCol){
    if(x<0 || x>n-1 || y<0 || y>m-1) return false;
    if(vis[x][y] || grid[x][y]!=inCol) return false;
    return true;
}

void dfs(int x, int y,int inCol){
    vis[x][y] = 1;
    grid[x][y] = col;
    for(int i=0;i<4;i++){
        if(isValid(x+dx[i],y+dy[i],inCol)){
            dfs(x+dx[i],y+dy[i],inCol);
        }
    }
}

int main() {
    optimize();

    cin>>n>>m>>col;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    int inCol = grid[3][0];
    dfs(3,0,inCol);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    
}