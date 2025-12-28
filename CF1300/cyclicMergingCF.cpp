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

        int mxI = 0;

        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]>a[mxI]) mxI = i;
        }
        ll sum = 0;
        for(int i=0;i<n-1;i++) {
            sum+=max(a[i],a[i+1]);
        }
        sum+=max(a[0],a[n-1]) - a[mxI];
        cout<<sum<<endl;
    }
    
}