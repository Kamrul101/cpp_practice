#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// ll a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        cout<<min(x,y)<<" "<<max(x,y)<<endl;
    }
    
}
