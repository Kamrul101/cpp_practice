#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    string str1;
    cin>>str1;
    sort(str1.begin(),str1.end());
    int sz = unique(str1.begin(), str1.end())-str1.begin();

    if(sz%2==0){
        cout<<"CHAT WITH HER!\n";
    }
    else{
        cout<<"IGNORE HIM!\n";
    }
}