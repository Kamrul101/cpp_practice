#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    long long a;
    cin>>a;
    int temp = a;
    if(a<0) a=a*(-1);
    string s = to_string(a);
    if(s[s.size()-1]=='0'){
        s.pop_back();
    }
    reverse(s.begin(),s.end());
    a = stoi(s);
    if(temp<0){

    cout<<(-1)*a<<endl;
    }
    else cout<<a<<endl;
}