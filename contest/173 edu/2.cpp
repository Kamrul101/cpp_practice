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
        ll n,d;
        cin>>n>>d;
        set<ll> s;
        s.insert(1);
        if(n>=3 || d%3==0) s.insert(3);
        if(d==5) s.insert(5);
        if(n>=3 || d==7) s.insert(7);
        if(n>=6 || (n>=3 && d%3==0) || d==9) s.insert(9);
        for(auto u:s){
            cout<<u<<" ";
        }
        cout<<endl;
    }
    
}