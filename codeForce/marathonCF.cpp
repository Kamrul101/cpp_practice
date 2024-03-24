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
        int a,count=0;
    cin>>a;
    for(int i=0;i<3;i++){
        int b;
        cin>>b;
        if(a<b) count++;
    }
    cout<<count<<endl;
    }
    
}