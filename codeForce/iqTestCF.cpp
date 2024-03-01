#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    optimize();
    int n;
    int a[101];
    int evenCount=0,oddCount=0,lastEven=0,lastOdd=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            evenCount++;
            lastEven = i+1;
        }
        else{
            oddCount++;
            lastOdd = i+1;
        }

    }
    if(evenCount<oddCount) cout<<lastEven<<"\n";
    else cout<<lastOdd<<"\n";

 
}