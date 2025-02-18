#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];
bool isBinaryDigit(int n){
    while(n>0){
        int d =n%10;
        if(d!=0 && d!=1){
            return false;
        }
        n/=10;
    }
    return true;
}
bool isProductBinary(int n){
    if(n==1) return true;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(isBinaryDigit(i)&& isBinaryDigit(n/i)){
                return true;
            }
        }
    }
    return false;
}

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(isProductBinary(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
           
    }
    
}
