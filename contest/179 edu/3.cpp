#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =5e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++) {
            cin>>a[i];
        }
        ll val,mxCnt=0,ans1=1e18;
        for(int i=1;i<=n;){
            int j=i+1,cnt=1;
            while(j<=n && a[i]==a[j] ){
                cnt++;
                j++;
            }
            ans1 = min(ans1,1LL*(n-cnt)*a[i]);
            i = j;
        }
        cout<<ans1<<endl;
        
        
    }
    
}