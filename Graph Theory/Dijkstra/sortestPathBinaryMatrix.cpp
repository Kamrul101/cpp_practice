#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
const int mx =102;

int grid[mx][mx];
int dist[mx][mx];


int n,m;

int dx[] = {-1,0,1,0,1,-1,1,-1};
int dy[] = {0,1,0,-1,1,1,-1,-1};
bool isValid (int x, int y){
    if(x<0 || x>n-1 || y<0 || y>m-1){
        return false;
    }
    if(grid[x][y]==1) return false;
    return true;
}


void dijkstra(pair<int,int> source){
    queue<pair<int,pair<int,int>>>q;
    dist[0][0] = 1;
    q.push({1,{0,0}});
    if(grid[0][0] || grid[n-1][m-1]) return;
    while(!q.empty()){
        int x = q.front().second.first;
        int y = q.front().second.second;
        int cur = q.front().first;
        q.pop();
        for(int i=0;i<8;i++){
            if(isValid(x+dx[i],y+dy[i])){
                int newX = x+dx[i];
                int newY = y+dy[i];
                if(cur+1<dist[newX][newY]){
                    dist[newX][newY] = cur+1;
                    q.push({dist[newX][newY],{newX,newY}});
                }
            }
        }
    }
}

int main() {
    optimize();
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
            dist[i][j]=1e9;
        }
    }
    
    dijkstra({0,0});
    if(dist[n-1][m-1]==1e9) cout<<-1<<endl;
    else cout<<dist[n-1][m-1]<<endl;
    
}