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
        vector<int> v(n+1);
        for(int i=1;i<=n;i++) cin>>v[i];
        vector<int> pre(n+1,0);
        for(int i=1;i<=n;i++){
            pre[i] = pre[i-1]+v[i];
        }
        
        int l=1,h=n;
        int ans = -1;
        while(l<=h){
            int mid = (l+h)/2;
            cout<<"? "<<(mid-l+1)<<" ";
            for(int i = l; i<=mid;i++){
                cout<<i<<" ";
            }
            cout<<endl;
            cout<<flush;

            int x;
            cin>>x;

            int val = pre[mid] - pre[l-1];

            if(x==val){
                l = mid + 1;
            }
            else{
                h = mid - 1;
                ans = mid;
            }
        }
        cout<<"! "<<ans<<endl;
        cout<<flush;

        
    }
    
}