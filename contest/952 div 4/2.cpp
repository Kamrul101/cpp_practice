#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 5e5 + 123;
// ll a[mx];

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int n1 = n/2;
        int n2 = n/3;
        int ans1 = 2 * (n1*(n1+1))/2;
        int ans2 = 3 * (n2*(n2+1))/2;
        cout<<(ans1>ans2 ? 2 : 3 )<<endl;
    }

}
