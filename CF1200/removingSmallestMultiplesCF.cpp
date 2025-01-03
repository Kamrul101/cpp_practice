#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1e6+123;
char s[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll sum = 0;
        for(int i=1;i<=n;i++) cin>>s[i];
        bool vis[mx]={0};
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                if(s[j]=='0' && !vis[j]) {
                    sum+=i*1LL;
                    cout<<j<<" "<<s[j]<<" "<<i<<" "<<sum<<endl;
                    vis[j]=1;
                }
                else if(s[j]!='0') break;
            }
        }
        cout<<sum<<endl; 
        
    }
    
}