#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 1001;
int a[mx][mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++) cin>>a[i][j];
        }
        int mn = 0,sum=0;
        for(int i=n;i>=1;i--){
            int j=1,k=i;
            int mn = 0;
            while(j<=n && k<=n){
                mn =max(-a[j][k],mn);
                j++;
                k++;
            }
            sum+=mn;
        }
        
        for(int i=2;i<=n;i++){
            int j=i,k=1;
            int mn = 0;
            while(j<=n && k<=n){
                mn = max(-a[j][k],mn);
                j++;
                k++;
            }
            sum+=mn;
        }
        cout<<sum<<endl;
    }
    
}