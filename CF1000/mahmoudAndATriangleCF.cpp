#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx];
int main() {
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    bool ans = false;
    for(int i=0;i<n-2;i++){
        int x = a[i];
        int y = a[i+1];
        int z = a[i+2];
        if(x+y>z && x+z>y && z+y>x){
            ans = true;
            break;
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}