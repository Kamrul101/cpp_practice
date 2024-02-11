#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    string a;
    cin>>a;
    
    cout<<(a.find("0000000")+1||a.find("1111111")+1?"YES\n":"NO\n");
    
}