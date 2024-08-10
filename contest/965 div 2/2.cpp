#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int> v(n),q(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      for(int i=0;i<n-1;i++){
        q[i] =  v[i+1];
      }
      q[n-1] = v[0];
      for(int i=0;i<n;i++){
        cout<<q[i]<<" ";
      }
      cout<<endl;
    } 
}