#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 2e5 + 123;
int a[mx];


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res =0;
        for(int i=0;i<n;i++){
            int x;

            cin>>x;
            res = __gcd(res, abs(x-(i+1)));
        }
        cout<<res<<endl;
        
    }
}