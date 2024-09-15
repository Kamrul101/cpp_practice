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
      int m1,m2;
      cin>>m1>>m2;  
      int b;
      cin>>b;
      
      if(m1>m2) swap(m1,m2);
      if(m1>b) cout<<m1-1<<endl;
      else if(m2<b) cout<<n-m2<<endl;
      else{
         cout<<min(abs((m1+m2)/2 - m1), abs((m1+m2)/2 - m2))<<endl;
      }
    }
    
}