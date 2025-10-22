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
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        int mx = 0;
        for(int i=0;i<n-1;i++){
            mx = max(abs(a[i]-a[i+1]),mx);
        }
        cout<<"Case #"<<tc<<": "<<mx<<endl;
    }
    
}