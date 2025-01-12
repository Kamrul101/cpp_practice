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
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> v(n);
        bool ans = true;
        for(int i=0;i<n;i++) {
            cin>>b[i];
            int x = (a[i]-b[i]);
            if(a[i]<b[i]) ans = false;
            v[i] = x;
        }
        if(ans) cout<<"YES"<<endl;
        else{
            sort(v.begin(),v.end());
            int x = v[0];
            ans = true;
            for(int i=1;i<n;i++){
                if(x+v[i]<0){
                    cout<<"NO"<<endl;
                    ans = false;
                    break;
                }
            }
            if(ans) cout<<"YES"<<endl;
        }
        
        
        
    }
    
}