#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    
    int n;
    cin>>n;
    int arr[n], max=0, min=101, max_i, min_i;
    for(int i=0; i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max = arr[i];
            max_i = i;
        }
        if(arr[i]<=min){
            min = arr[i];
            min_i = i;
        }
    }
    if(max_i>min_i) min_i++;
    cout<<max_i + (n-1) - min_i;

    
}