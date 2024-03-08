#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int a[1000]={0},max=0,count=0;
        for(auto u:v){
            a[u]++;
        }
        for(int i=0;i<1000;i++){
            if(a[i]>max) max = a[i];
        }
        for(int i=0;i<1000;i++){
            if(max == a[i]) count+=a[i];
        }
        
        cout<<count<<endl;
}