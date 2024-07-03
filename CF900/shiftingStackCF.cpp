#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll sum=0,sum2=0;
        bool ans = true;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            sum+=x;
            sum2+=i;
            if(sum<sum2) ans = false;
        }
        
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}