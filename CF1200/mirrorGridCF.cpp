#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =102;
int a[mx][mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                char x;
                cin>>x;
                a[i][j]=x-'0';
            }
        }
        int cnt=0,sum=0;
       
        for(int i=1;i<=n/2;i++){
            for(int j=i;j<=n-i;j++){
                cnt = a[i][j]+ a[j][n-i+1]+a[n-i+1][n-j+1]+a[n-j+1][i];
                int cnt0=4-cnt;
                sum+=min(cnt,cnt0);
            }
        }
        cout<<sum<<endl;
        
    }
    
}