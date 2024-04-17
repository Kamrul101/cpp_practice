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
    int matrix[n],b[n][n];
    /*this code is for array to make
    diagonal matrix
    for(int i=0;i<n;i++){
        cin>>matrix[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) cout<<matrix[i]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;

    }*/
    /*
    this part is to retrieve diagonal matrix value to a array
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
            if(i==j) matrix[i]=b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        cout<<matrix[i]<< " ";
    }
    cout<<endl;
    */
}
