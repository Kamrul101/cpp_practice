#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mn = INT_MAX,sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mn = min(mn,a[i]);
            sum+=mn;
        }
        if(n==2){
            cout<<sum<<endl;
            continue;
        }
        if(a[0]>=a[1]){
            int x = a[0]+a[1];
            cout<<x<<endl;
            continue;
        }
        int x = a[0] + min(a[0],a[1]+a[2]);
        cout<<x<<endl;

        
    }
    
}