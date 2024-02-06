#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int count=0;
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> v(n);
    for(int i=0 ;i<n;i++){
        cin>>v[i];
    }
    for(auto u : v){
        if(u && u>=v[k-1]){
            count++;
        }
        
    }
    cout<<count<<"\n";
}