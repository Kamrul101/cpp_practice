#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"




int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
      int a,b,c,d;
      cin>>a>>b>>c>>d;
        if(min(a,b)>max(c,d) || max(a,b)<min(c,d)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

}
