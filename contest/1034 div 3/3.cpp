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
        vector<int>b(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        int mn = INT_MAX, mx = INT_MIN;

        for(int i=0;i<n;i++){
            mn = min(mn,a[i]);
            if(a[i]==mn) b[i] = 1;
        }
        for(int i=n-1;i>=0;i--){
            mx = max(mx,a[i]);
            if(a[i]==mx) b[i] = 1;
        }
        for(int i=0;i<n;i++) cout<<b[i];
        cout<<endl;
        
    }
    
}