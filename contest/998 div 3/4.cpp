#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        bool ans = true;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                ans = false;
                break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else{
            for(int i=0;i<n-1;i++){
                int x = min(a[i],a[i+1]);
                a[i]-=x;
                a[i+1]-=x;
            }
            ans = true;
            for(int i=0;i<n-1;i++){
                if(a[i]>a[i+1]){
                    ans = false;
                    break;
                }
            }
            if(ans) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;          
        }
    }
    
}