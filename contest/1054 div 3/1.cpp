#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cntNeg =0 ,cnt0=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0) cnt0++;
            if(a[i]<0) cntNeg++;
        }
        int ans = 0;
        ans+=cnt0;
        if(cntNeg%2) ans+=2;
        cout<<ans<<endl;
    }
    
}