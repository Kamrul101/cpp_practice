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
        for(int i=1;i<=n;i++) cin>>a[i];
        int dis = 0;
        int mid = ceil(n/2.0);
        int l = mid;
        int r=mid;
        if(n%2==0) r++;
        l--;
        r++;
        while(l>0 && r<=n ){
            if(a[l]==a[l+1]) swap(a[l],a[r]);
            else if(a[r]==a[r-1]) swap(a[l],a[r]);
            l--;
            r++;
        }
        for(int i=1;i<n;i++){
            if(a[i]==a[i+1]){
                dis++;
            }
        }
        cout<<dis<<endl;
        
    }
    
}