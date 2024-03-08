#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e6+123;
long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        long long n,max=0,min=99999999999;
        cin>>n;
    
    for(int i=0; i<n;i++){
        cin>>a[i];
        if(min>a[i]) min=a[i];
        if(max<a[i]) max=a[i];
    }
    cout<<(max-min)<<endl;
    }
    

}