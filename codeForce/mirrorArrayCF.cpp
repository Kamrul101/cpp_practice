#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int a[101][101];

int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    
    for(int i= 0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }  
        }
    for(int i= 0;i<n;i++){
            for(int j=m-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";  
    }
    
}