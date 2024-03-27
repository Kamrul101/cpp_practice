#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int p[mx];
// int a[mx];
// int b[mx];

int main() {
    optimize();
    int n;
    cin>>n;
    while(n--){
        string s,b;
        cin>>s;
        b+=s[0];
        for(int i=1;i<s.size();i+=2){
            b+=s[i];
            
        }
        cout<<b<<endl;
    }
}