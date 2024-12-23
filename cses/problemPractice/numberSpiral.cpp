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
        ll n,m;
        cin>>n>>m;
        if(n>=m){
            if(n%2){
                ll x= n-1;
                x*=x;
                x++;
                cout<<x+m-1<<endl;
            }
            else{
                n*=n;
                cout<<n-m+1<<endl;

            }
        }
        else{
            if(m%2){
                m*=m;
                cout<<m-n+1<<endl;
            }
            else{
                m--;
                m*=m;
                m++;
                cout<<m+n-1<<endl;
            }
        }
        
    }
    
}