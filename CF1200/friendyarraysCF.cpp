#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx],b[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++) cin>>a[i];
        int OR=0;
        for(int i=0;i<m;i++){
            cin>>b[i];
            OR|=b[i];
        }
        int x = 0,y=0;
        for(int i=0;i<n;i++){
            x^=a[i];
            y^=(a[i]|OR);
        }
        cout<<min(x,y)<<" "<<max(x,y)<<endl;


        
    }
    
}