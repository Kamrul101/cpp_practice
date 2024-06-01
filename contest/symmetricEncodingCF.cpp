#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];
// int b[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,temp;
        cin>>s;
        temp = s;
        sort(s.begin(),s.end());
        int sz = unique(s.begin(),s.end())-s.begin();
        map<char, char> mp;
        for(int i=0;i<sz;i++){
            mp[s[i]] = s[sz-1-i];
        }
        for(int i=0;i<n;i++){
            temp[i] = mp[temp[i]];
        }
        cout<<temp<<endl;

    }
}
