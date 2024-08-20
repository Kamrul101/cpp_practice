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
    int n,t;
    cin>>n>>t;
    
    int x = (n+1)/2;
    int ans = (x+t-1)/t*t;
    if(ans>n) cout<<-1<<endl;
    else cout<<ans<<endl;

    
}