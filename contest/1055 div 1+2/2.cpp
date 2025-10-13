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
        ll n, k1,k2, d1,d2;
        cin>>n>>k1>>k2>>d1>>d2;

        ll mx = -1;

        if(k1<d1) mx = max(mx,d1);
        else if(k1>d1) mx = max(mx,n-d1);

        if(k2<d2) mx = max(mx,d2);
        else if(k2>d2) mx = max(mx,n-d2);

        cout<<mx<<endl;
        
        
    }
    
}