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
        int n;
        cin>>n;
      string s;
      cin>>s;
      bool ans = true;
      for(int i=0;i<s.size()-1;i++){
        if(static_cast<int>(s[i])>static_cast<int>(s[i+1])){
            ans =false;
            break;
        }
        
      }
      if(ans) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      
    }

}
