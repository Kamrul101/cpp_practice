#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int a[101][101];

int main() {
    optimize();
    int n;
    cin>>n;
    int primary = 0;
    int secondary = 0;
    for(int i= 0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }  
        }
    for(int i=0;i<n;i++){
        primary += a[i][i];
    }
    for(int i=0,j=n-1;i<n; i++,j--){
        secondary += a[i][j];
    }
    int diff = primary - secondary;
    if(diff<0) diff*= -1;
    cout<<diff<<"\n";
}