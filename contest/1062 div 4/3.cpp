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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cntOdd=0,cntEven=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]&1) cntOdd++;
            else cntEven++;
        }
        if(cntOdd && cntEven) sort(a,a+n);
        for(int i=0;i<n;i++) cout<<a[i]<<" \n"[i+1==n];
        
    }
    
}