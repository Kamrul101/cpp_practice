#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];



int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int mn = min(a,b);
        int mx = max(a,b);
        if(mn*2>=mx) cout<<(mn*2)*(mn*2)<<endl;
        else cout<<mx * mx<<endl;
        
        
    }
}
