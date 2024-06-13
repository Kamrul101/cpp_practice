#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 2e5 + 123;
// int a[mx];
 
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
    //    int n = s[0]-'a';
    //    while(n>0){
    //      n--;
    //      cout<<static_cast<char>('a' + n)<<s[1]<<endl;
    //    }
    //     n = s[0]-'a';
    //    while(n<7){
    //      n++;
    //      cout<<static_cast<char>('a'+ n)<<s[1]<<endl;
    //    }
    //     n = s[1]-'1';
    //    while(n>0){
    //      n--;
    //      cout<<s[0]<<static_cast<char>('1' + n)<<endl;
    //    }
    //     n = s[1]-'1';
    //    while(n<7){
    //      n++;
    //      cout<<s[0]<<static_cast<char>('1'+ n)<<endl;
    //    }
    string s1 = "abcdefgh",s2= "12345678";
    for(auto u:s1){
        if(u!=s[0]) cout<<u<<s[1]<<endl;
    }
    for(auto u:s2){
        if(u!=s[1]) cout<<s[0]<<u<<endl;
    }
    }
 
}