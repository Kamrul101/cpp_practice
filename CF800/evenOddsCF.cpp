#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    long long n,k;
    cin>>n>>k;
    n = (n+1)/2;
    if(k>n){
        cout<<(k-n)*2<<"\n";
    }
    else{
        cout<<2*k - 1<<'\n';
    } 
}