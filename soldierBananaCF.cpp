#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int k,n,w;
    cin>>k>>n>>w;
    int totalAmount = k*((w*(w+1))/2);
    int borrowed = totalAmount - n;
    if(borrowed >0){

    cout<<borrowed<<"\n";
    }
    else{
        cout<<0<<"\n";
    }
    
    
}