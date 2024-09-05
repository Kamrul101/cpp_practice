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
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        int k,l;
        for(k=0;k<i;k++) cout<<k<<" ";
        cout<<k++;
        for(l=i-1; l>=0;l--) cout<<" "<<l;
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        int k,l;
        for(k=0;k<i;k++) cout<<k<<" ";
        cout<<k++;
        for(l=i-1; l>=0;l--) cout<<" "<<l;
        cout<<endl;
    }
    
}