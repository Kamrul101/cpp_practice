#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"




int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
      int n,c,d;
      vector<int>v1;
      cin>>n>>c>>d;
      for(int i=1;i<=n*n;i++) {
        int m;
        cin>>m;
        v1.push_back(m);

      }
      sort(v1.begin(),v1.end());
      vector<int>v2;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          v2.push_back(v1[0]+ i*c + j*d);
        }
      }
      sort(v2.begin(),v2.end());
      if(v1==v2) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }

}
