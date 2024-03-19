#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int n,count=0,min,max;
    int a;
    cin>>n>>a;
        max =a;
        min=a;
        for(int i=1;i<n;i++){
        cin>>a;
        if(a>max) {
            max=a;
            count++;
        }
        if(a<min) {
            min=a;
            count++;
        }
    }
    cout<<count<<endl;
    
    
}