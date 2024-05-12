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
    int triDiag[3*n-2];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x;
            cin>>x;
            if(i-j==1) triDiag[j-1]=x;
            else if(i==j) triDiag[n-1+i-1]=x;
            else if(i-j==-1) triDiag[2*n-1+i-1]=x;
        }
    }
    cout<<endl;
    
    //row major mapping and getting data and displaying symmetric
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i-j==1){
                cout<<triDiag[j-1]<<" ";

            }
            else if(i==j) cout<<triDiag[n-1+i-1]<<" ";
            else if(i-j==-1) cout<<triDiag[2*n-1+i-1]<<" ";
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    // for(int i=1;i<3*n-2;i++) cout<<triDiag[i]<<" ";
    
    
}
