#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1= "madame";
    
    int txtLength = str1.length();
    string revStr2;
    
    for(int i=txtLength -1; i>=0; i--){
        revStr2 = revStr2 + str1[i];
        }
    int i = 0, j=0;
    while(str1[i]!='\0' && revStr2[j]!='\0'){
        if(str1[i]!=revStr2[j]){
            break;
        }
        i++;
        j++;
    }
    if(str1[i]==revStr2[j]){cout<<"Palindrome";}
    else{cout<<"Not Palindrome";}
    
}