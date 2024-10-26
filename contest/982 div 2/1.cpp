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
        int mx=-1, my=-1;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            mx = max(mx,x);
            my = max(my,y);
        }
        cout<<2 * (mx+my)<<endl;
        
    }
    
}