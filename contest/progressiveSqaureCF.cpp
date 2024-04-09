#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;

// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
      ll n,c,d,min=999999999;
      vector<ll>v1;
      vector<ll>v2;
      cin>>n>>c>>d;
      for(int i=0;i<n*n;i++) {
        int m;
        cin>>m;
        v1.push_back(m);
        if(m<min) {
            min=m;
            }

      }
      
      int b[n][n];
      b[0][0]=min;
      for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            b[i+1][j]=b[i][j]+c;
            b[i][j+1]=b[i][j]+d;
            
            
        }
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v2.push_back(b[i][j]);
        }
      }
      sort(v1.begin(),v1.end());
      sort(v2.begin(),v2.end());
      bool ans=true;
      for(int i=0;i<n*n;i++){
        {
            if(v1[i]!=v2[i]){
                
                ans =false;
                break;
            }
        }
        if(!ans) break;
      }
      if(ans) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;

    }

}
