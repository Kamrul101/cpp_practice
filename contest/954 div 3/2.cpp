#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 2e5 + 123;
// int a[mx];


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){

        int n,m;
        cin>>n>>m;
        int a[n][m];
    for(int i= 0;i<n;i++){
        for(int j=0;j<m;j++){
                cin>>a[i][j];
        }  
    }

  for(int i= 0;i<n;i++){

        for(int j=0;j<m;j++){
        bool ans = true;
        int mx = 0;
            if(i-1>=0 ){
                mx = max(a[i-1][j],mx);
            }
            if(j-1>=0 ){
                mx = max(a[i][j-1],mx);
            }
            if(i+1<n){
                mx = max(a[i+1][j],mx);
            }
            if(j+1<m ){
                mx = max(a[i][j+1],mx);
            }
            if( i-1>=0 && a[i-1][j]>=a[i][j] ){
                ans = false;  
            }
            if( j-1>=0  && a[i][j-1]>=a[i][j]){
                ans = false;  
            }
            if(i+1<n && a[i+1][j]>=a[i][j] ){
                ans = false;  
            }
            if(j+1<m && a[i][j+1]>=a[i][j]){
                ans = false;  
            }
            if(ans) a[i][j] = mx;
            
        }
        
        
    }
    for(int i= 0;i<n;i++){
        for( int j=0;j<m;j++){
                cout<<a[i][j]<<" ";
        } 
        cout<<endl; 
    }
    }
}