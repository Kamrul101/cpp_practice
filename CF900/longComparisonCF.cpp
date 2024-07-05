#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 2e5+123;
// int a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll a1,a2;
        ll p1,p2;
        cin>>a1>>p1;
        cin>>a2>>p2;
        ll x =  min(p1,p2);
        p1-=x;
        p2-=x;
        
        if(p1>10) cout<<">"<<endl;
        else if(p2>10) cout<<"<"<<endl;
        else{
            while(p1--){
            a1*=10;
        }
        while(p2--){
            a2*=10;
        }
        if(a1<a2) cout<<"<"<<endl;
        else if(a1==a2) cout<<"="<<endl;
        else cout<<">"<<endl;
        }
        
        
    }
    
}