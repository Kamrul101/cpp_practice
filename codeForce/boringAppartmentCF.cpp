#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
        vector<string> v;
        int digit = 0;
    for (int i = 1; i <= 9; ++i) {
        while (digit < 10000) {
            digit = digit * 10 + i;
            if(digit<10000) v.push_back(to_string(digit));
        }
        digit = 0;
    }
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum=0;
        for(auto u:v){
            sum+=u.size();
            if(u==s) break;
        }
        cout<<sum<<endl;
    }
}
