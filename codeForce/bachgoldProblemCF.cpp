#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"




int main() {
    optimize();
    int n, c;
    cin>>n;
    if(n%2) {
        c=n/2;
        cout<<c<<endl;
        for(int i=0;i<c-1;i++){
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    else{
        c=n/2;
        cout<<c<<endl;
        for(int i=0;i<c;i++){
            cout<<2<<" ";
        }
        cout<<endl;
    }
}
