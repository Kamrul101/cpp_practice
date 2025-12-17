#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        vector<int> pre(n+1);
        for(int i=1;i<=n;i++){
            pre[i] = pre[i-1] + (s[i-1] - '0');
        }

        int ans = -1;
        for(int i=0;i<=n;i++){
            int l = i-pre[i];
            int r = pre[n] - pre[i];
            if(l*2 >=i && r*2>=n-i){
                if(ans==-1 || abs(n-2*i)<abs(n-2*ans)){
                    ans = i;
                }
            }
        }
        cout<<ans<<endl;
    }
    
}