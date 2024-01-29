#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "finding";
    int H[26]={0};
    int i;
    for(i=0; str1[i]!='\0'; i++){
        H[str1[i]-'a']++;
    }
    for(i = 0; i<26;i++){
        if(H[i]>1){
            cout<<static_cast<char>(i+97)<<" "<<H[i]<<endl;
        }
    }
}