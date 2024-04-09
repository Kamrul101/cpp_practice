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
      int n,l,r,c=0;
      bool f= false;
      cin>>n;
      for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==1) {
            r=i;
            c++;
        }
        if(!f && a[i]==1){
            f=true;
            l=i;
        }
      }
      cout<<((r-l)-(c-1))<<endl;
    
    }

}
