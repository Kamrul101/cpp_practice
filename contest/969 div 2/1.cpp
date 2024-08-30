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
        int l,r;
        cin>>l>>r;
        int even = 0,odd=0,ans=0;
        for(int i=l;i<=r;i++){
            if(i%2==0) even++;
            else odd++;
            if(even>=1 && odd>=2){
                ans++;
                odd-=2;
                even--;
            }
        }
        cout<<ans<<endl;
        

    }
    
}