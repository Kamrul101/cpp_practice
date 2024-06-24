#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 2e5 + 123;
// ll a[mx];


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       if(n%2==0) cout<< (n+(2*k))<<endl;
       else{
            int i;
            for(i=2;i<=n;i++){
                if(n%i==0) break;
            }
            cout<<(n+i+ (2*(k-1)))<<endl;
       } 
       
    }
}