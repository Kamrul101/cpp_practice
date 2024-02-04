#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    optimize();
    string s;
    string ret;
    cin>>s;
    for(auto c: s){
        char s1 = tolower(c);
        if(!(s1=='a' || s1=='e' || s1 =='i' || s1=='o' || s1=='u' || s1 == 'y')){
            ret +='.';
            ret +=s1;
        }
        
    }
    cout<<ret<<'\n';
}