#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =105;
int a[mx];
int main() {
    optimize();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        int n,a,b;
        cin>>n>>a>>b;
        cout<<"Case #"<<tc<<": ";
        for(int i=1;i<2*n;i++) cout<<1<<" ";
        cout<<b<<endl;
    }
    
}