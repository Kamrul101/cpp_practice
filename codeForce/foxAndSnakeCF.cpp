#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(i%4==0 ) {
                if(j==1)cout<<"#";
                else cout<<".";
            }
            else if(i%4==2 ) 
            {
             if(j==b) cout<<"#";
             else cout<<".";
            }
            else cout<<"#";
        }
        cout<<endl;
    }
}
