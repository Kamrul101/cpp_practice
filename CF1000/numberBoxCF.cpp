#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =105;
int a[mx][mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int sum = 0,mn = 101,cntNeg = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                sum+=abs(a[i][j]);
                if(a[i][j]<0) cntNeg++;
                mn = min(mn,abs(a[i][j]));
            }
        }
        if(cntNeg%2==0) cout<<sum<<endl;
        else cout<<sum-(2*abs(mn))<<endl;
        
    }
    
}