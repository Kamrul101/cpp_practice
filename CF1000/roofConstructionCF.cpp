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
        int x = __builtin_clz(n-1);
        x = (31-x);
        for(int i=(1<<x)-1;i>=0;i--) cout<<i<<" ";
        for(int i=(1<<x);i<n;i++) cout<<i<<" ";
        cout<<endl;
        
    }
    
}