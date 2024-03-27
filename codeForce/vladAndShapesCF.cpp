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
        int n;
        cin>>n;
        bool f = false;
        for(int i=0;i<n;i++){
           string s;
           cin>>s;
           int sum=0;
           for(auto u:s){
            sum+=u-'0';
           }
           if(sum==1) f=true;
        }
        if(f) cout<<"TRIANGLE"<<endl;
        else cout<<"SQUARE"<<endl;
        
           
    }
    
}
