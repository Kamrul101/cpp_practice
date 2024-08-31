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
    int n;
    cin>>n;
    int f[n]={0};
    f[0] = 1;
    f[1]=0;
    for(int i=2;i<=n;i++){
        f[i] = 2*f[i-2];
    }
    cout<<f[n]<<endl;
}