#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 2e5 + 123;


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll t = min(min(a,b),c);
        if(a%t==0 && b%t==0 && c%t==0){
            a/=t;
            a--;
            b/=t;
            b--;
            c/=t;
            c--;
            if((a+b+c)<=3) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}