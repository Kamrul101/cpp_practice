#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    optimize();
    int n;
    cin>>n;
    int a[n];
    int count=0,maxCount = 1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=a[i-1]){
            count++;
            maxCount = max(maxCount, count);
        }
        else {
            count = 1;
        }
    }
    
    cout<<maxCount<<endl;
}