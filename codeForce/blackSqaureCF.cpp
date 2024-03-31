#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];

int main() {
    optimize();
    int a[10];
    for(int i=1;i<=4;i++){
        
        cin>>a[i];
        
    }
    int cal = 0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        int b = s[i]-'0';
        cal+=a[b];
    }
    cout<<cal<<endl;
    
}
