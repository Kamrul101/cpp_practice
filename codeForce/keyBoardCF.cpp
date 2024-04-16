#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    // string s1="qwertyuiop",s2="asdfghjkl;",s3="zxcvbnm,./";
    string s1="qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin>>c;
    string s,ans;
    cin>>s;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s1.size();j++){
            if(s[i]==s1[j] && c=='R'){
                ans+=s1[j-1];
            }
            if(s[i]==s1[j] && c=='L'){
                ans+=s1[j+1];
            }
           
        }
    }
    cout<<ans<<endl;


}
