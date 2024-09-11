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
int check(int a,int b){
       if(a>b) return 1;
       else if(a<b) return -1;
       else return 0; 
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans=0;
        if(check(a,c)+check(b,d)>0) ans++;
        if(check(a,d)+check(b,c)>0) ans++;
        if(check(b,c)+check(a,d)>0) ans++;
        if(check(b,d)+check(a,c)>0) ans++;
        cout<<ans<<endl;
    }
    
}