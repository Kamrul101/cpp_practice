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
        int n;
        cin>>n;
        cout<<(n-2)*2+2<<endl;
        cout<<1<<" "<<1<<" "<<n<<endl;
        for(int i=2;i<n;i++){
            cout<<i<<" "<<1<<" "<<n-i+1<<endl;
            cout<<i<<" "<<n-i+2<<" "<<n<<endl;
        }
        cout<<n<<" "<<2<<" "<<n<<endl;
        
    }
    
}