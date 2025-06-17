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
        int n,s;
        cin>>n>>s;
        int sum = 0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int mx = a[n-1];
        int mn = a[0];
        if(s>=mx){
            sum+=(s-mn);
            cout<<sum<<endl;
            continue;
        }
        int mn1 = abs(s-mx);
        int mn2 = abs(s-mn);
        mn1 = min(mn1,mn2);
        sum+=(mx-mn)+ mn1;
        cout<<sum<<endl;
        
        
    }
    
}