#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =103;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mxEven=-1,mxOdd=-1;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(i%2 && mxOdd<a[i]){
                mxOdd = a[i];
            }
            if(i%2==0 && mxEven<a[i]){
                mxEven = a[i];
            } 
        }
        int ans = 0;
        if(n%2){
            ans = max((mxOdd+(n/2)+1),(mxEven+(n/2)));
        }
        else ans = max(mxEven,mxOdd)+n/2;

        cout<<ans<<endl;
    }
    
}