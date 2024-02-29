#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main() {
    optimize();
    int n,count = 0;
    cin>>n;
    
    for(int i= 1;i<=n;i++){
        for(int j=i; j<=n;j++){
        int k = sqrt(i*i + j*j);   
        if(k<=n && (k*k == i*i+j*j)){
            count++;
        } 
        }
        
    }
    cout<<count<<"\n";
}