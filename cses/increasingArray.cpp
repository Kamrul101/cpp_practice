#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 2e6+123;
long long a[mx];

int main() {
    optimize();
    int n;
    cin>>n;
    long long count = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    for(int i=1;i<n;i++){
        
        if(a[i-1]>a[i]){
             
            count +=(a[i-1] - a[i]);
            a[i] = a[i-1];
        }
        
    }
    cout<<count<<endl;
}