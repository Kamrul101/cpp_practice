#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    optimize();
    int n,m,k;
    cin>>n>>m;
    int a[n][m];
    bool found = false;
    for(int i= 0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }  
        }
        cin>>k;
    for(int i= 0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j] == k) {
                cout<<"will not take number\n";
                found = true;
                break;
                }
            }
            
        }
        if(!found) cout<<"will take number\n";
        
}