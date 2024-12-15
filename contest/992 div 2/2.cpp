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
        if(n==1) cout<<1<<endl;
        else if(n==2) cout<<2<<endl;
        else if(n==3) cout<<2<<endl;
        else if(n==4) cout<<2<<endl;
        else{
            int ans = 0;
            int t;
            int x  = 4;
            while(x<n){
                x++;
                x*=2;
                ans++;
            }
            cout<<ans+2<<endl;
        }
        
    }
    
}