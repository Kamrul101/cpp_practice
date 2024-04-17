#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int n;
    cin>>n;
    map<string,int>m;
    string s;
    cin>>s;
    string temp;
    for(int i=1;i<n;i++){
        temp+=s[i-1];
        temp+=s[i];
        m[temp]++;
        temp.clear();
    }
    int max = -1;
    string ans;
    for(auto u:m){
        if(u.second>max) {
            max=u.second;
            ans=u.first;
        }
        // cout<<u.first<<" "<<u.second<<endl;
    }
    cout<<ans<<endl;
}
