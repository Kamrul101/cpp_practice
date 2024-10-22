#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1005;
// int a[mx];
char grid[mx][mx];
int lev[mx][mx];
bool vis[mx][mx];
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};


map<pair<int, int>, pair<int, int>> par;
int n,m;

bool isValid (int x, int y){
    if(x<1 || x>n || y<1 || y>m){
        return false;
    }
    if(vis[x][y] || grid[x][y]=='#') return false;
    return true;
}

void bfs(int x, int y){
    lev[x][y] = 0;
    vis[x][y] = 1;
    queue<pair<int,int>> q;
    q.push({x,y});
    
    while(!q.empty()){
        int currX = q.front().first;
        int currY = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            if(isValid(currX+dx[i], currY+dy[i])){
                int newX = currX+dx[i];
                int newY = currY+dy[i];
                vis[newX][newY] = 1;
                lev[newX][newY] = lev[currX][currY] + 1;
                q.push({newX,newY});
                par[{newX,newY}] = {currX,currY};
            }
        }
        
    }
}

int main() {
    optimize();
    mem(lev,-1);

    cin>>n>>m;

    int startI,startJ,desI,desJ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='A'){
                startI = i, startJ = j;
            }
            if(grid[i][j]=='B'){
                desI = i, desJ = j;
            }
        }
    }
    bfs(startI,startJ);
    if(lev[desI][desJ]==-1) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<lev[desI][desJ]<<endl;

        vector<pair<int,int>> ans;
        pair<int,int> end = {desI,desJ};
        while (end != make_pair(startI, startJ)) {
            int x = par[end].first;
            int y = par[end].second;
            ans.push_back({end.first - x, end.second - y});
            end = {x, y};
        }
        reverse(ans.begin(),ans.end());

        for(auto u :ans){
            if(u.first == 1 and u.second ==0){
	    		cout << 'D';
	    	}
	    	else if(u.first == -1 and u.second ==0){
	    		cout << 'U';
	    	}
	    	else if(u.first == 0 and u.second == 1){
	    		cout << 'R';
	    	}
	    	else if(u.first == 0 and u.second == -1){
	    		cout << 'L';
	    	}
        }
        }
    

    
}