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

int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1,};
bool isValid (int x, int y){
    if(x<0 || x>n-1 || y<0 || y>m-1){
        return false;
    }
    // if(grid[x][y]==1) return false;
    return true;
}


void dijkstra(pair<int,int> source){
    priority_queue<pair<int,pair<int,int>>,
                    vector<pair<int,pair<int,int>>>,
                    greater<pair<int,pair<int,int>>>>pq;
    dist[0][0] = 0;
    pq.push({0,{0,0}});

    while(!pq.empty()){
        int diff = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();
        if(x==n-1 && y==m-1) return;
        for(int i=0;i<4;i++){
            int newX = x+dx[i];
            int newY = y+dy[i];
            if(isValid(newX,newY)){
                int effort = max(abs(grid[newX][newY]-grid[x][y]), diff);
                if(effort<dist[newX][newY]){
                    dist[newX][newY] = effort;
                    pq.push({dist[newX][newY],{newX,newY}});
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
    cout<<dist[n-1][m-1]<<endl;
    
}