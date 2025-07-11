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
        int n,x,m;
        cin>>n>>x>>m;
        int l=x,r=x;
        int mnL,mxR;
        for(int i=0;i<m;i++){
            cin>>mnL>>mxR;
            if(max(l,mnL)<=min(r,mxR)){
                l = min(mnL,l);
                r = max(mxR,r);
            }
        }
        cout<<r-l+1<<endl;
        
    }
    
}