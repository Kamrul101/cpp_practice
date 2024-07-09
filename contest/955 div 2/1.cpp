#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 2e5 + 123;
// int a[mx];


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        ll d1 = x1 - y1;
        ll d2 = x2 - y2;
        if(d1!=0 && d2!=0 && !((d1>0 && d2<0) || (d1<0 && d2>0))){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}