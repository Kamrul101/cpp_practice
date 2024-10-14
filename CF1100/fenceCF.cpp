#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int n,k;
    cin>>n>>k;
    int preSum[n]={0};
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) preSum[i] = preSum[i-1]+a[i];
    int j=k,min = INT_MAX,ans;

    for(int i=1;i<=n-j+1;i++){
        int x = preSum[k] - preSum[i-1];
        if(x<min){
            min = x;
            ans = i;
        }
        k++;
    }
    cout<<ans<<endl;
}