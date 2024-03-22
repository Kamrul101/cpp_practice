#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];
int response( string s){
    int i=0;
    int minus = 1;
    long long res=0;
    while(i<=s.size() && s[i]==' ') i++;
    if(s[i]=='-'){
            minus = -1;
            i++;
            
        }
    else if(s[i]=='+'){
            
            i++;
        }
    while(i<s.size()){
    
    if(s[i]>='0' && s[i]<='9') {
            res = res*10 + (s[i]-'0');
            if(res> INT_MAX && minus==1) return INT_MAX;
            else if(res> INT_MAX && minus==-1) return INT_MIN;
            i++;
        }
    else return res*minus;

    }
    return res*minus;
    
}
int main() {
    optimize();
    string s;
    cin>>s;
    cout<<response(s);
    
}
