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
bool check(int n, int m){
    if(n==m) return true;
    else if(n%3) return false;
    else return (check(n/3,m) || check (2*n/3 , m));
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
       int n,m;
       cin>>n>>m; 
        cout<<(check(n,m)?"YES":"NO")<<endl;
    }
    
}