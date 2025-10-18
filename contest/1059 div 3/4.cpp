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
        int n;
        cin>>n;

        int ans;

        int l = 1, h=n;
        // int ans2;
        while(l<=h){
            int mid = (l+h)>>1;
            cout<<"1 "<<mid<<" "<<n<<endl;
            cout.flush();

            int x;
            cin>>x;

            cout<<"2 "<<mid<<" "<<n<<endl;
            cout.flush();

            int y;
            cin>>y;

            if(x!=y){
                ans = mid ;
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        cout<<"1 "<<1<<" "<<n<<endl;
        cout.flush();
 
        int sum1;
        cin>>sum1;
 
        cout<<"2 "<<1<<" "<<n<<endl;
        cout.flush();
 
        int sum2;
        cin>>sum2;
 
        int extra = sum2 - sum1;

        cout<<"! "<<ans-extra+1<<" "<<ans<<endl;
        cout.flush();
    }
    
}