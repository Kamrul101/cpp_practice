#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    string s;
    cin>>s;
    int sz = s.size();
    if(s[0]=='-'){
            if(s[sz-1]>s[sz-2]) s.erase(s.begin()+sz-1);
            else s.erase(s.begin()+sz-2);
        
        cout<<stoi(s)<<endl;
    }
    else{
        cout<<stoi(s)<<endl;
    }
    
}
