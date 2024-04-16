#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int n,one = 0,zero=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++ ){
        if(s[i]=='1') one++;
        else zero++;
    }
    cout<<((one>zero)?(one-zero):(zero-one))<<endl;
}
