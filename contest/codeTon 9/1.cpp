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
      int n;
      cin>>n;
      vector<int> v;
      v.push_back(2);
      int res = 1;

      for(int i=2;i<100;i++){
        if(i%2) v.push_back(i);
        
      } 
      for(int i=0;i<n;i++) cout<<v[i]<<" ";
      cout<<endl; 
        
    }
    
}