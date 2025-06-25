#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 1005;
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
            if(abs(a[0]-a[1])<=1){
                cout<<0<<endl;
                continue;
            }
            else{
                cout<<-1<<endl;
                continue;
            }
        }
        bool check = false;
        int ans = INT_MAX;
        for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])<=1){
                ans = 0;
            }
            int lastMin = a[i+1];
            int lastMax = a[i+1];
            int cnt = 0;
            for(int j=i+2;j<n;j++){
                if((lastMin<=a[i] && lastMin<=a[j]) || (lastMax>=a[i] && lastMax>=a[j])){
                    ans = min(ans,j-i-1);
                }
                lastMin = min(lastMin,a[j]);
                lastMax = max(lastMax,a[j]);
            }
        }
        if(ans==INT_MAX) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    
}