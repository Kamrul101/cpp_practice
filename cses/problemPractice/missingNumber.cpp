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
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++) cin>>a[i];
    sort(a,a+n-1);
    int missing=1;
    for(int i=0;i<n;i++){
        if(missing==a[i]) missing++;
        else break;
    }
    if(missing==n+1) missing = n;
    cout<<missing<<endl;
    
}