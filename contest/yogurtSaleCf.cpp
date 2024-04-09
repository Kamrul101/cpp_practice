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
      int n,a,b,sum=0;
      cin>>n>>a>>b;
      if(a*2>=b && n%2==0){
        sum+=b*n/2;
      }
      else if(a*2>=b && n%2!=0){
        sum+=b*(n/2);
        sum+=a*(n%2);
      }
      else{
        sum+= a*(n);
      }
        cout<<sum<<endl;
    }

}
