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
int computeXOR(int n)
{
  if (n%4 == 0) return n;
  if (n%4 == 1) return 1;
  if (n%4 == 2) return n + 1;
  return 0;
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x = computeXOR(a-1);
        if(x==b) cout<<a<<endl;
        else if((x^b)!=a) cout<<a+1<<endl;
        else cout<<a+2<<endl;
        
    }
    
}