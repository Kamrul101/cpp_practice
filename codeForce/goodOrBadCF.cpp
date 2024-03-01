#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    bool found = false;
    for(int i=2;i<s.size();i++){
        char s1 = s[i-2];
        char s2 = s[i-1];
        char s3 = s[i-0];
        if(s1 == '0' && s2=='1' && s3=='0'){
            found = true;
            break;
        
        }
        else if(s1 == '1' && s2=='0' && s3=='1'){
            found = true;
            break;
        }
        else found = false;
        
    }
        cout<<(found == true ? "Good\n" : "Bad\n");
    

    }
}