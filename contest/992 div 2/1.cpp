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
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool ans = false;
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                if(abs(a[i]-a[j])%k!=0 && i!=j){
                    cnt++;
                }
                
            }
            if(cnt==n-1){
                cout<<"YES"<<endl;
                ans = true;
                cout<<i+1<<endl;
                break;
            }
        }
        if(!ans) cout<<"NO"<<endl;
    }
    
}