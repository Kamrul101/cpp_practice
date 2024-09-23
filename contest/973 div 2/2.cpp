#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[mx];
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i<n-2) sum+=a[i];
        }
        a[n-1] -=(a[n-2]-sum);
        cout<<a[n-1]<<endl;
        
    }
    
}