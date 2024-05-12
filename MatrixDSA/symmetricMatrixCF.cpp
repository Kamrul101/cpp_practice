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
                //setting elements in array for symmetric using row major of lower
                lowTriMat[((i*(i-1))/2)+(j-1)]=x; 
                
            }
        }
    }
    cout<<endl;
    
    //row major mapping and getting data and displaying symmetric
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                cout<<lowTriMat[((i*(i-1))/2)+(j-1)]<<" ";

            }
            else{
                cout<<lowTriMat[((j*(j-1))/2)+(i-1)]<<" ";
            }
        }
        cout<<endl;
    }
    
    
}
