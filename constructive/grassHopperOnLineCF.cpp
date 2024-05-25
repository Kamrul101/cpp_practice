#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(x%k){
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<1<<" "<<x-1<<endl;
        }

    }    
    
}
