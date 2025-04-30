#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx=20;
int a[mx];
int main() {
    optimize();
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt = 0;
    for(int mask = 0;mask<(1<<n);mask++){
        int sum=0,mn = INT_MAX,mx=INT_MIN;
        for(int i=0;i<n;i++){
            if((mask&(1<<i))!=0){
                sum+=a[i];
                mn=min(mn,a[i]);
                mx=max(mx,a[i]);
            }
        }
        if(sum>=l && sum<=r){
            if((mx-mn)>=x) cnt++;
        }

    }
    cout<<cnt<<endl;
    
}