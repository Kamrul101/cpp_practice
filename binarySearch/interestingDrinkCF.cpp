#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 2e5 + 123;
ll a[mx],b[mx];


int main()
{
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++ ) cin>>a[i];
    
    sort(a,a+n);
    int q;
    cin>>q;
    while(q--){
        int k;
        cin>>k;
        int l =0,h = n-1;
        int ans =-1;
        while(l<=h){
            int mid = (l+h)/2;
            if(a[mid]>k){
                ans = mid;
                h = mid -1;
            }
            else l = mid +1;
        }
        if(ans!=-1) cout<<ans<<endl;
        else cout<<n<<endl;
    }
        
    
}