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
       long long n;
       cin>>n;
       long long pos = 1;
       while(pos<=n){
        long long nextPos = 2*pos;
        if(nextPos>n) break;
        pos = nextPos;
       }
       cout<<pos<<endl;
    }

}
