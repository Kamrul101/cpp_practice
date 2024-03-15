#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";


int main() {
    optimize();
    
    int n;
    cin>>n;
    int a[n];
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
    if(n%2 !=0){
        cout<<"-1"<<endl;
    }
    else if(v.size()==1 && v[0]<10) {cout<<"-1"<<endl;}
    else{
        for(int i=0;i<n;i++){
            swap(v[i],v[i+1]);
            i++;
        }
        for(auto u:v){
            cout<<u<<" ";
        }
        cout<<endl;
    }
    
}