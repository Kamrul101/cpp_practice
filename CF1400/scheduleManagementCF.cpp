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
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            x--;
            a[x]++;
        }
        int l=0,h=m,ans;
        while(l<=h){
            int mid = (l+h)/2;
            ll time = 0, work = 0;
            for(int i=0;i<n;i++){
                if(a[i]<=mid) time+=(mid-a[i])/2;
                else work+=a[i]-mid;
            }
            if(time>=work){
                ans = mid; 
                h = mid-1;
            }
            else l=mid+1;
        }
        cout<<ans<<endl;
        
    }
    
}