#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 2e8 + 12;
int h[mx];

int main() {
    optimize();
    int n,count = 0;
    cin>>n;
    for(int i = 1; i<=n;i++){
        h[i*i] = 1;
    }
    for(int i= 1;i<=n;i++){
        for(int j=i; j<=n;j++){
        int k = i*i + j*j;   
        if(h[k]==1){
            count++;
        } 
        }
        
    }
    cout<<count<<"\n";
}