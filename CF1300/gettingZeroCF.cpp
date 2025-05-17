#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 32768
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<n;j++){
        int ans = 15;
        for(int i=0;i<=15;i++){
            int x=i;
            int cur = (a[j]+i)%MOD;
            while(cur!=0){
                cur<<=1;
                cur%=MOD;
                x++;
            }
            ans = min(ans,x);
        }
        cout<<ans<<" ";
    }
    cout<<endl;
}