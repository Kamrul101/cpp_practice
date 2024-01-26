#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"What is the string?";
    getline(cin,str);
    cout<<endl;
    int i= 0;
    while(str[i]!='\0'){
        i++;
    }
    cout<<i;


}