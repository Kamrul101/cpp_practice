#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    vector <long long> v = {-11,-11,20202002030033030,3443809490,20202002030033030};
    // map<string, int> id;
    map<long long, int> cnt;
    for(int i=0; i<v.size();i++){
        cnt[v[i]]++;
    }
    // cout<<cnt[20202002030033030];
    for(auto u:cnt){
        cout<<u.first<<" "<<u.second<<endl;
    }
    // map<string, int> id;
    // id["kamrul"] = 1;
    // id["Hasan"] = 2;
    // cout<<id["Hasan"]<<endl;
    // gender["kamrul"] = "male";
    // gender["ayesha"] = "female";
    // cout<<gender["kamrul"]<<" "<<gender["ayesha"]<<endl;
}