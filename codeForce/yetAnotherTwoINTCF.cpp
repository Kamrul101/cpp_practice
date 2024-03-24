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
        int a,b;
        int rem=0;
    cin>>a>>b;
    if(a>b ){
        rem = a-b;
        if(rem%10==0){
            cout<<(rem/10)<<endl;
        }
        else cout<<(rem/10)+1<<endl;
    }
    else if(b>a){
        rem = b-a;
        if(rem%10==0){
            cout<<(rem/10)<<endl;
        }
        else cout<<(rem/10)+1<<endl;
    }
    else cout<<0<<endl;
    }
    
}
