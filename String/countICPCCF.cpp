#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    string s;
    int sum=0;
    cin>>s;
    for(auto u:s){
        sum+= u - '0';
    }

    cout<<sum<<"\n";
}