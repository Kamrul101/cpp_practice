#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int n;
    cin>>n;
    int toe[n+n-1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x;
            cin>>x;
            if(i==1){
                toe[j-1]=x;
            }
            if(j==1 && i>1){
                toe[n-1+i-1]=x;
            }
        }
    }
    cout<<endl;
    
    //displaying toeplitz 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j) cout<<toe[j-i]<<" ";
            else if(i>j) cout<<toe[n+i-j-1]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<2*n-1;i++) cout<<toe[i]<<" ";
    
    
}
