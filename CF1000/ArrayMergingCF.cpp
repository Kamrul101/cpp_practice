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
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i],a[i]--;
        for(int i=0;i<n;i++) cin>>b[i],b[i]--;
        vector<int> mpA(2*n),mpB(2*n);
        int len = 0;
        for(int i=0;i<n;i++){
            if(i>0 && a[i]!=a[i-1]){
                len = 0;
            }
            len++;
            mpA[a[i]] = max(mpA[a[i]],len);
        }
        len = 0;
        for(int i=0;i<n;i++){
            if(i>0 && b[i]!=b[i-1]){
                len = 0;
            }
            len++;
            mpB[b[i]] = max(mpB[b[i]],len);
        }
        int ans = 0;
        for(int i=0;i<2*n;i++){
            ans = max(ans,mpA[i]+mpB[i]);
        }
        cout<<ans<<endl;
    }
    
}