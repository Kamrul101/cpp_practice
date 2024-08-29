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
    ll n,m;
    cin>>n>>m;
    int res = -1;
    if(m%n==0){
        res = 0;
        int d = m/n;
        while(d%2==0){
            d/=2;
            res++;
        }
        while(d%3==0){
            d/=3;
            res++;
        }
        if(d!=1) res=-1;
    }
    cout<<res<<endl;
    
}