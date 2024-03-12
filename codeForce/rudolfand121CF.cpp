#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];
bool zero(int a[], int n){
    for(int i=0;i<n-2;i++){
        if(a[i]==0) continue;
        else if(a[i]<0) return false;
        else{
            a[i+1] -= 2*a[i];
            a[i+2]-=a[i];
            
        }
    }
    if(a[n-2]==0 && a[n-1]==0){
        return true;
    }
    else return false;
    
}

int main() {
    optimize();
    
    int t;
    cin>>t;
    while (t--)
    {
    int n;
    cin>>n;
     int a[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    // bool canZero = zero(a,n);
    if(zero(a,n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    }
}



