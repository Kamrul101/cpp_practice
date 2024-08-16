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
    
        int m,n;
        cin>>m>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll t=0;
        t+=abs(a[0]-1);
        for(int i=1;i<n;i++){
            if(a[i]>=a[i-1]){
                t+=abs(a[i]-a[i-1]);
            }
            else{
                t+=abs(m-a[i-1]+a[i]);
            }
        }
        cout<<t<<endl;
 
    
}