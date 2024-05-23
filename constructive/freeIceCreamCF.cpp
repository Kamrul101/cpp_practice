#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t,k=0;
    ll ice;
    cin>>t>>ice;
    while(t--){
        
        char a;
        ll  d;
        cin>>a>>d;
        if(a=='+') ice+=d;
        else{
            if(d<=ice){
                ice-=d;
            }
            else{
                k++;
            }
        }
    }
        cout<<ice<<" "<<k<<endl;
}
