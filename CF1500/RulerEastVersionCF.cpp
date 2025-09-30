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
    // optimize();
    int t;
    cin>>t;
    while(t--){
        int l = 2, h=999;
        int ans = -1;
        while(l<=h){
            int mid = (l+h)>>1;
            cout<<"? "<<l<<" "<<mid<<endl;
            cout<<flush;

            int val;
            cin>>val;
            if(val==l*mid){
                l = mid+1;
            }
            else{
                h = mid -1;
                ans = mid;
            }
        }
        cout<<"! "<<ans<<endl;
        cout<<flush;
    }
    
}