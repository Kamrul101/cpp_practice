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
        ll k,l1,r1,l2,r2;
        cin>>k>>l1>>r1>>l2>>r2;
        ll ans = 1,sum=0;
        for(int i=1;i<=32;i++){
            ll l=l1,r=r1,left = 0,right=0;
            while(l<=r){
                ll mid = (l+r)/2;
                ll temp = ans*mid;
                if(temp>=l2){
                    left = mid;
                    r = mid -1;
                }
                else l = mid+1;
            }
            l = l1, r = r1;
            while(l<=r){
                ll mid = (l+r)/2;
                ll temp = ans*mid;
                if(temp<=r2){
                    right = mid;
                    l = mid+1;
                }
                else r = mid-1;
            }
            if(left!=0 && right!=0){
                sum+=(right-left+1);
            }
            if(ans*k*1LL>r2){
                break;
            }
            ans*=k*1LL;
        }
        cout<<sum<<endl;
        
    }
    
}