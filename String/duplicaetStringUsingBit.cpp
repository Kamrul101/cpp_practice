#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "finding";
    long int H=0, x=0;
    for(int i=0; s[i]!='\0'; i++){
        x=1;
        x=x<<(s[i]-'a');
        if((x&H) >0){
            cout<<static_cast<char>(s[i])<<' '<<i<<endl;
        }
        else{
            H=x|H;
        }
    }
}