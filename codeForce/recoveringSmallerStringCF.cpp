#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 2e6+123;
long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=28) cout<<"aa"<<static_cast<char>(n-2+96)<<"\n";
        else if(n<=53) cout<<"a"<<static_cast<char>(n-27+96)<<"z\n";
        else cout<<static_cast<char>(n-52+96)<<"zz\n";
    }
}