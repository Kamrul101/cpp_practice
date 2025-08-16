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
        ll n,m;
        cin>>n>>m;
        ll k=1;
        ll copyN = n;
        int cnt2 = 0,cnt5=0;
        while(n && n%2==0){
            n/=2;
            cnt2++;
        }
        while(n && n%5==0){
            n/=5;
            cnt5++;
        }
        while(cnt2<cnt5 && k*2<=m){
            cnt2++;
            k*=2;
        }
        while(cnt5<cnt2 && k*5<=m){
            cnt5++;
            k*=5;
        }
        while(k*10<=m) k*=10;
        if(k==1) cout<<copyN*m<<endl;
        else {
            k*=m/k;
            cout<<copyN*k<<endl;
        }
        
    }
    
}