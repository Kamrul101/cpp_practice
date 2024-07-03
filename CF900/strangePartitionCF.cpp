#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 2e5+123;

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ld n,x;
        cin>>n>>x;
        ld sum = 0,min = 0,max=0;
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            sum+=a;
            max+= ceill(a/x);
        }
        min = ceill(sum/x);

        cout<<static_cast<ll>(min)<<" "<<static_cast<ll>(max)<<endl;
       
    }
}