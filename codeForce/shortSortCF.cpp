#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
// int a[mx];



int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='a' || s[1]=='b' || s[2]=='c') cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
