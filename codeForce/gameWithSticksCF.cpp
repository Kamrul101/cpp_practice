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
    int m = min(a,b);
    if(m%2==0) cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl;
}
