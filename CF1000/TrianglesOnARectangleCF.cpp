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
        int w,h;
        cin>>w>>h;
        vector<int> v[4];
        for(int i=0;i<4;i++){
            int k;
            cin>>k;
            for(int j=0;j<k;j++){
                int x;
                cin>>x;
                v[i].push_back(x);
            }
        }
        int hor1 = v[0].back() - v[0][0];
        int hor2 = v[1].back() - v[1][0];
        int ver1 = v[2].back() - v[2][0];
        int ver2 = v[3].back() - v[3][0];
        ll ans1 = max(1LL*hor1*h,1LL*hor2*h);
        ll ans2 = max(1LL*ver1*w,1LL*ver2*w);
        cout<<max(ans1,ans2)<<endl;
        
    }
    
}