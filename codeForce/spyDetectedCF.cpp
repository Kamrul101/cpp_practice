#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 2e6+123;
long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while (t--)
    {
        
    int n;
    cin>>n;
    int a[n],h[101]={0},digit;

    for(int i=0;i<n;i++){
        cin>>a[i];
        h[a[i]]++;
    }
    for(int i=0;i<101;i++){
        if(h[i]==1) digit = i;
    }
    for(int i=0;i<n;i++){
        if(a[i]== digit) cout<<i+1<<"\n";
    }
    }
    
    
    
    
    
    
}