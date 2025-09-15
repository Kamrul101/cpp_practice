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
        vector<pair<int,int>>vp(n);
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            vp[i]={x,y};
        }
        int ans = 0;
        int lastPos = 0, lastMin = 0;
        for(int i=0;i<n;i++){
            int x = vp[i].first;
            int y = vp[i].second;
            if(lastPos==y){
                if((x-lastMin)%2==0){
                    ans+=(x-lastMin);
                }
                else{
                    ans+=x-lastMin-1;
                }
            }
            else{
                if((x-lastMin)%2==0){
                    ans+=(x-lastMin-1);
                }
                else{
                    ans+=x-lastMin;
                }
            }
            lastMin = x;
            lastPos = y;
        }
        // cout<<lastMin<<endl;
        cout<<ans+(m-lastMin)<<endl;
        
    }
    
}