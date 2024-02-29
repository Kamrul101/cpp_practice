#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

char a[101][101];

int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    for(int i= 0;i<n;i++){
        for(int j=0;j<m;j++){
                cin>>a[i][j];
        }  
    }
    int x,y;
    cin>>x>>y;
    x--;
    y--;

    bool ans = false;
    if(a[x-1][y-1] != '.' && a[x-1][y] != '.' 
    && a[x-1][y+1] != '.' && a[x][y-1] != '.' 
    && a[x][y+1] != '.' && a[x+1][y-1] != '.' 
    && a[x+1][y] != '.' && a[x+1][y+1] != '.'){
        cout<<"yes\n";
    }
    else cout<<"no\n";

    
}