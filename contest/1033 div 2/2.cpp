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
        int n,s,dx,dy,x,y;
        cin>>n>>s;
        int ans = 0;
        while(n--){
            cin>>dx>>dy>>x>>y;
            if(dx==dy){
                if(x==y){
                    ans++;
                    continue;
                }
            }
            if(x+y==s){
                ans++;
                continue;
            }
        }
        cout<<ans<<endl;
    }
    
}