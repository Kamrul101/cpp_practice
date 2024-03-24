#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e6+123;
long long a[mx];

int main() {
    optimize();
    int n,max=-1,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max) max=a[i];
    }
    for(int i=0;i<n;i++){
        sum+=max-a[i];
    }
    cout<<sum<<endl;
    
}