#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "painting";
    string str2 = "painting";
    int i = 0, j=0;
    while(str1[i]!='\0' && str2[j]!='\0'){
        if(str1[i]!=str2[j]){
            break;
        }
        i++;
        j++;
    }
    if(str1[i]==str2[j]){cout<<"Equal";}
    else if(str1[i]<str2[j]){cout<<"Str1 is Smaller";}
    else{cout<<"Str2 is Smaller";}

}