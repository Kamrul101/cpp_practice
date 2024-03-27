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
    int m=0,c=0;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b) m++;
        else if(a<b) c++;
        else {
            m+=0;
            c+=0;
        }
    }
    if(m>c) cout<<"Mishka"<<endl;
     else if(m<c) cout<<"Chris"<<endl;
     else cout<<"Friendship is magic!^^"<<endl;
    
}
