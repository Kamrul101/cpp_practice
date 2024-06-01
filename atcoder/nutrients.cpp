#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int a[mx];



int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    int b[n][m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int ans = true;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<m;j++){
            cin>>b[i][j];
            
        }
        
    }
    
    for(int i=0;i<m;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            
            sum+=b[j][i];
            
        }
        if(sum<a[i]){
            ans = false;

            break;
        }
        
    }
    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
}
