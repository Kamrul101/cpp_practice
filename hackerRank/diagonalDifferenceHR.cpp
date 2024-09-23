#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1e4+123;
int a[mx][mx];
int main() {
    optimize();
    int n;
    cin>>n;
    int diag1=0,diag2=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(i==j) diag1+=a[i][j];
        }
    }
    int j=n;
    for(int i=1;i<=n;i++){
            diag2+=a[i][j];
            j--;
        
    }
    cout<<abs(diag1-diag2)<<endl;
    
}