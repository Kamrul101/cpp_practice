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
      ll n,k;
      cin>>n>>k;
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      int mx=-1,mi;
      int check= a[k-1];
      for(int i=0;i<k-1;i++){
        if(mx<a[i]){
            mx=a[i];
            mi=i;
        }
      }
      if(mx>a[k-1]){
        swap(a[mi],a[k-1]);
      }
        int count=0;
        if(a[0]>a[1] ){
            
        }
      

    }

}
