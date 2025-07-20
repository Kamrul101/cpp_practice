#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx],b[mx];
bool check(int mid, int n){
    int l = 0, r = 0;
    for(int i=0;i<n;i++){
        l = max(l-mid,a[i]);
        r = min(r+mid,b[i]);
        if(l>r) return false;
    }
    return true;
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        int lo = 0, hi= 1e9;
        while(lo<hi){
            int mid = lo + (hi-lo)/2;
            if(check(mid,n)){
                hi = mid;
            }
            else lo =mid+1;
        }
        cout<<lo<<endl;
        
    }
    
}