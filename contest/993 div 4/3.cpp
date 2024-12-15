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
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int ans = 0;
        int rem1 = 0,rem2=0;
        if(m>=a){
            ans+=a;
            rem1+=m-a;
        }
        else{
            ans+=m;
        }
        if(m>=b){
            ans+=b;
            rem2+=m-b;
        }
        else{
            ans+=m;
        }
        int totalrem = rem1+rem2;
        if(totalrem>=c){
            ans+=c;
        }
        else ans+=totalrem;
        cout<<ans<<endl;
    }
    
}