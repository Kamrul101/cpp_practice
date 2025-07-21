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
        int n,m,a,b;
        cin>>n>>m>>a>>b;

        int x = min(a,n-a+1);
        int y = min(b,m-b+1);
        // cout<<x<<" "<<y<<endl;

        int s1 = 1;
        int s2 = 1;

        if(n>1) s1+= 64-__builtin_clzll(n-1);
        if(y>1) s1+= 64-__builtin_clzll(y-1);

        if(m>1) s2+= 64-__builtin_clzll(m-1);
        if(x>1) s2+= 64-__builtin_clzll(x-1);
        cout<<min(s1,s2)<<endl;
        
    }
    
}