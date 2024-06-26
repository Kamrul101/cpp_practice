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
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++ ) cin>>a[i];
    for(int i=0;i<m;i++ ) cin>>b[i];
    sort(a,a+n);
    for(int i=0;i<m;i++){
        int l =0,h = n-1;
        int ans =-1;
        while(l<=h){
            int mid = (l+h)/2;
            if(a[mid]>b[i]){
                ans = mid;
                h = mid -1;
            }
            else l = mid +1;
        }
        if(ans!=-1) cout<<ans<<" ";
        else cout<<n<<endl;
    }
}