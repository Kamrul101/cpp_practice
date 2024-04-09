#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string a,b,c;
      cin>>a>>b>>c;
      bool ans = true;
        for(int i=0;i<n;i++){
            if(a[i]!=c[i] && b[i]!=c[i]){
                cout<<"YES"<<endl;
                ans = false;
                break;
            }
        }
        if(ans) cout<<"NO"<<endl;
    }

}
