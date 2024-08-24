#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int n,k;
    cin>>n>>k;
    int mx=-1,mxI=-1,ans;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mxI = (a[i]+k-1)/k;
        if(mxI>=mx) {ans = i;
        mx=mxI;}
    }
    cout<<ans+1<<endl;
}