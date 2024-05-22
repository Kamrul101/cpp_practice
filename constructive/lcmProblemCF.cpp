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
        ll l,r;
        cin>>l>>r;
        if(2*l>r) cout<<-1<<" "<<-1<<endl;
        else{
            cout<<l<<" "<<2*l<<endl;
        }

    }
}
