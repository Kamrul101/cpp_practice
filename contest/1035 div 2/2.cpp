#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        ll dist = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);

        ll sum = 0,mx = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            mx = max(mx,a[i]);
        }
        if(sum*sum<dist) {
            cout<<"NO"<<endl;
            continue;
        }
        int mn = max(2*mx-sum,0LL);
        if(mn*mn>dist){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;

        
    }
    
}