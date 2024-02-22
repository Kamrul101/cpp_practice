#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    string s;
    vector<string> v;
    getline(cin,s);
    for(auto u: s){
        if(u>=97 && u<=122){
            v.push_back(to_string(u));
        }
    }
    sort(v.begin(),v.end());
    int sz = unique(v.begin(),v.end())-v.begin();
    cout<<sz<<endl;


    
}