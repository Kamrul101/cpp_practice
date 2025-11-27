#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        if(n==2){
            cout<<min(a[0],a[1])<<endl;
            continue;
        }
        int ans = 0;
        for(int i=0;i<n-2;i++){
            int x = a[i];
            int y = a[i+1];
            int z = a[i+2];
            vector<int> v={x,y,z};
            sort(v.begin(),v.end());
            ans = max(ans,v[1]);
        }
        cout<<ans<<endl;
        
    }
    
}