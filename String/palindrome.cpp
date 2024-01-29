#include<bits/stdc++.h>
using namespace std;

int main(){
    string str= "madam";
    
    int txtLength = str.length();
    string rev;
    int j;
    for(int i=txtLength -1; i>=0; i--){
        rev = rev + str[i];
        }
    
    cout<<rev<<endl;
    
}