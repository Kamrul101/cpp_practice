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
        int l,r,d,u;
        cin>>l>>r>>d>>u;
        int x = (l+r);
        int y = (d+u);
        if(l==r && r==d && d==u) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
}