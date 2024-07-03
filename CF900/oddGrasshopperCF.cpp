// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define endl "\n"
// #define MOD 1000000007
// #define mem(a,b) memset(a, b, sizeof(a) )
// const int mx = 2e5 + 123;
// ll a[mx];

// int main()
// {
//     optimize();
//     int t;
//     cin>>t;
//     while(t--){
//         ll x,n;
//         cin>>x>>n;
//         ll d = n/4;
//         for(ll i= 4*d + 1;i<=n;i++){
//             if(x%2){
//                 x+= i;
//             }
//             else x-=i;
//         }
        
//         cout<<x<<endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 2e5 + 123;
ll a[mx];

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll x,n;
        cin>>x>>n;
        map<ll,ll> mp;
        mp[0] = 0;
        mp[1] = n;
        mp[2] = -1;
        mp[3] = (-1*n)-1;
        ll d = mp[n%4];
        if(x%2==0) cout<<x-d<<endl;
        else cout<< x+d<<endl;
        
    }
}