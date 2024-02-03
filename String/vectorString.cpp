#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    vector<string> v;
    v.push_back("Alaia");
    v.push_back("sucka");
    v.push_back("Pucka");
    v.push_back("Blaaa");
    // sort(v.begin(),v.end());
    sort(v.rbegin(),v.rend());
    for(auto c: v){
        cout<<c<<endl;
    }
}