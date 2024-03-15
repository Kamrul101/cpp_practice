#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";

    int a[5][5];

int main() {
    optimize();
    
    for(int i= 1;i<=3;i++){
        for(int j=1;j<=3;j++){
                cin>>a[i][j];
        }  
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            
        cout<<1-((a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j-1]+a[i][j+1])%2);   
        }  
    cout<<endl;
    }
    
}