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
    int l = 1, h = 1000000;
    int ans = -1;
    while(l<=h){
        int mid = (l+h)/2;
        cout<<mid<<endl;
        cout<<flush;

        string s;
        cin>>s;

        if(s=="<"){
            h = mid - 1;
        }
        else{
            l = mid+1;
            ans = max(mid,ans);
        }

    }
    cout<<"! "<<ans<<endl;
    
}