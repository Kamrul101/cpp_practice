#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
      int n,m,q;
      cin>>n>>m>>q;
      vector<int> t(m),d(q);
      for(int i=0;i<m;i++) cin>>t[i];
      for(int i=0;i<q;i++) cin>>d[i];
      sort(t.begin(),t.end());
      for(int i=0;i<q;i++){
        if(d[i]<t[0]) cout<<t[0]-1<<endl;
        else if(d[i]>t[m-1]) cout<<n-t[m-1]<<endl;
        else{
            auto x = lower_bound(t.begin(),t.end(),d[i])-t.begin();
            int m1 = t[x];
            int m2 = t[x-1];
            cout<<min(abs((m1+m2)/2 - m1), abs((m1+m2)/2 - m2))<<endl;
        }
      }

    }
    
}