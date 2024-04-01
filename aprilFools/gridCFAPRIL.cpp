#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    for(int i=0;i<21;i++){
    int one=0,two=0;
        string s;
        cin>>s;
        for(auto u:s){
            if(u=='1') one++;
            else two++;
        }
    cout<<one<<" "<< two<<endl;
    }

    // if(one>two) cout<<one-two+1<<endl;
    // else cout<<two-one+1<<endl;
    
}
