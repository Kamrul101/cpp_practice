#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++){
        
        cin>>a[i];
    }
    for(int i=0, j=n-1; i<j ; i++,j--){
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl; 
}