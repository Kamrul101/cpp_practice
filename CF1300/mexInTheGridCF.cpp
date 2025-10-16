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
        int x = n*n-1;
        int a[n][n];
        for(int i=0;i<(n+1)/2;i++){
            for(int j=i;j<n-i;j++){
                a[i][j] = x;
                x--;
            }
            for(int j=i+1;j<n-i;j++){
                a[j][n-i-1] = x;
                x--;
            }
            if(n-i-1>i){
                for(int j=n-i-2;j>=i;j--){
                    a[n-i-1][j] = x;
                    x--;
                }
            }
            if(n-i-1>i && n-i-1>i+1){
                for(int j=n-i-2;j>i;j--){
                    a[j][i] = x;
                    x--;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        
    }
    
}