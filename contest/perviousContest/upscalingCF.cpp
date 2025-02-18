#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=2*n;++i){
            for(int j=1;j<=2*n;++j){
                if((i%4==2 || i%4==1) && (j%4==1 || j%4==2)){
                    cout<<"#";
                }
                else if((i%4==3 || i%4==0) && (j%4==0 || j%4==3)){
                    cout<<"#";
                }
                else{
                    cout<<".";
                }
            }
            cout<<endl;
        }
           
    }
    
}
