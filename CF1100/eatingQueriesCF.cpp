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
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.rbegin(),v.rend());
        for(int i=1;i<=n;i++){
            a[i] = a[i-1]+v[i-1];
        }
        for(int i=0;i<k;i++){
            int q;
            cin>>q;
            ll l=1, h = n,ans=-1;
            while(l<=h){
                int mid = l +(h-l+1)/2;
                if(a[mid]>=q){
                    ans = mid;
                    h = mid -1;
                }
                else l = mid+1;
            }
            cout<<ans<<endl;
        }

        
    }
    
}