#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =5e5+123;
int a[mx];


bool check(int h, int n){
    vector<int> vis(n,0);
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(a[i]<=h){
            vis[i] = 1;
        }
        else if(i && vis[i-1] && abs(a[i]-a[i-1])<=h){
            vis[i] = 1;
        }
    }
    for(int i=n-2;i>=0;i--){
        if(vis[i+1] && abs(a[i]-a[i+1])<=h){
            vis[i] = 1;
        }
    }
    for(int i=0;i<n;i++) if(vis[i]==0) return false;
    return true;
}

int main() {
    optimize();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        int n;
        cin>>n;
        int mx = -1, mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mx = max(mx,a[i]);
        }


        int l = 0,h=mx;
        int ans=mx;
        while(l<=h){
            int mid = (l+h)/2;
            if(check(mid,n)){
                ans = mid;
                h = mid -1;
            }
            else l = mid+1;
        }
        cout<<"Case #"<<tc<<": "<<ans<<endl;
    }
    
}