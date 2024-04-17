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
            if(i>=j){
                //setting elements in array for row major
                // lowTriMat[((i*(i-1))/2)+(j-1)]=x; 
                //setting elements in array for column major
                lowTriMat[((n*(j-1))-(((j-1)*(j-1))/2)+(i-j))]=x;
            }
        }
    }
    cout<<endl;
    /*
    //row major mapping and getting data and displaying
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                cout<<lowTriMat[((i*(i-1))/2)+(j-1)]<<" ";
            }
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    */
    //column major mapping and getting data and displaying
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                cout<<lowTriMat[((n*(j-1))-(((j-1)*(j-1))/2)+(i-j))]<<" ";
            }
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    
}
