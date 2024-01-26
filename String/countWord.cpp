#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int word= 0;
    cout<<"What is the string?";
    getline(cin,str);
    cout<<endl;
    for(int i=0; str[i]!= '\0'; i++){
        if((str[i] == ' ') && (str[i-1]!= ' ')){
            word++;
        }
    }
    cout<<word + 1;

}