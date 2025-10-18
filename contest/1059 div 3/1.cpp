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
        int mx = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mx = max(mx,a[i]);
        }
        cout<<mx<<endl;
        // int mx = 0;
        // for(int i=0;i<n;i++){
        //     int sum = 0;
        //     for(int j=i;j<n;j++){
        //         sum+=a[j];
        //         mx = max(mx, sum/(j-i+1));
        //     }
        // }
        // cout<<mx<<endl;
        
    }
    
}