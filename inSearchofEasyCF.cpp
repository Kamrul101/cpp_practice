#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int n,a,s=0;
    cin>>n;
    vector <int> v;
    for(int i=0; i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    for(int u: v){
        s = s + u;
    }
    if(s>0){
        cout<<"HARD\n";
    }
    else {
        cout<<"EASY\n";
    } 
}