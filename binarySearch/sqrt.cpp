#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const double eps = 1e-9;
const int mx = 2e5 + 123;


int main()
{
    optimize();
    
    ld n;
    cin>>n;
    ld l=0, h=n;
    while(h-l>eps){
        ld mid = (l+h)/2;
        if((mid*mid)<n){
            l = mid;
        }
        else h = mid;
    }
    fraction();
    cout<<l<<endl;
}