#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int m[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
     int n;
     ll f,a,b;
     cin>>n>>f>>a>>b;
     m[0]=0;
     for(int i=1;i<=n;i++){
      cin>>m[i];
     }
     for(int i=1;i<=n;i++){
        ll diff=m[i]-m[i-1];
        ll moment = a* diff;
        ll mn = min(moment, b);
        f-=mn;
        
     }
     if(f<=0) cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
    }

}
