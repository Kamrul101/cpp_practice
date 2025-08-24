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
        ll sum = 0;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=n-1;i>=0;i-=2){
            sum+=a[i];
        }
        // if(n%2) sum+=a[1];
        cout<<sum<<endl;
        
    }
    
}