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
        int equalValue=-1;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(a[i]==b[i]) equalValue=i;
        }
        if(equalValue+1==n){
            cout<<n<<endl;
            continue;
        }
        vector<int> mp(n+1);
        
        for(int i=n-2;i>=max(equalValue,0);i--){
            if(a[i]==a[i+1] || b[i]==b[i+1] || mp[a[i]] || mp[b[i]]){
                equalValue = i;
                break;
            }
            mp[a[i+1]] = 1;
            mp[b[i+1]] = 1;
        }
        cout<<equalValue+1<<endl;
    }
    
}