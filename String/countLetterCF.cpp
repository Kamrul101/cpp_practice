#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int h[26]={0};
    for(auto u:s){
        h[u-97]++;
    }
    for(int i=0; i<26;i++){
        if(h[i]>0) cout<<static_cast<char>(i+97)<<" "<<": "<<h[i]<<"\n";
    }   
}