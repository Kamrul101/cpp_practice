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
    int lowTriMat[n*(n+1)/2];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x;
            cin>>x;
            if(i<=j){
                //setting elements in array for row major
                // lowTriMat[(n*(i-1))-((i-2)*(i-1))/2 + (j-i)]=x; 
                //setting elements in array for column major
                lowTriMat[j*(j-1)/2 + (i-1)]=x;
            }
        }
    }
    cout<<endl;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
    //row major mapping and getting data and displaying
                // cout<<lowTriMat[(n*(i-1))-((i-2)*(i-1))/2 + (j-i)]<<" ";
    //column major mapping and getting data and displaying
                cout<<lowTriMat[j*(j-1)/2 + (i-1)]<<" ";
            }
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    
    
}
