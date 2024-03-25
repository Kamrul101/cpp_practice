#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a>=1900) cout<<"Division 1"<<endl;
        else if(a>=1600 && a<=1899) cout<<"Division 2"<<endl;
        else if(a>=1400 && a<=1599) cout<<"Division 3"<<endl;
        else cout<<"Division 4"<<endl;
    }
}