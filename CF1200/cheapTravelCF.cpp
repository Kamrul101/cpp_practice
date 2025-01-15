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
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int ans1= 0,ans2=0;
    if(m*a<=b){
        ans1 = n*a;
    }
    else ans1 = (n/m) * b + min((n%m)*a,b);
    cout<<ans1<<endl;
}