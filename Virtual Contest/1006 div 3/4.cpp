#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e3+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        int mx = 0,l=0,r=0;
        for(int i=0;i<n;i++){
            int cnt1=0,cnt2=0;
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]) cnt1++;
                if(a[j]<a[i])cnt2++;
                if(mx>cnt1-cnt2){
                    mx = cnt1-cnt2;
                    l=i+1;
                    r=j+1;
                }
            }
        }
        cout<<(l==0?1:l)<<" "<<(r==0?1:r)<<endl;

    }
    
}