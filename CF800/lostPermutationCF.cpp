#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 10012;
int a[mx];


int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        mem(a,0);
        int v[10000] = {0};
        int mx = -1;
        for(int i=1;i<=n;i++) {
            cin>>a[i];
            v[a[i]] = 1;
            mx = max(mx,a[i]);
        }
        
        bool ans = false;
        for(int i=1;i<=10000;i++){
            if(v[i]==0) s-=i;
            if(s==0 && i>=mx) {
                ans = true;
                break;
            }
            if(s<0) break;
        }
        
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
   
    
}