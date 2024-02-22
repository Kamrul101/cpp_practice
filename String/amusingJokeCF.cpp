#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3;
    s4 = s1+s2;
    sort(s4.begin(),s4.end());
    sort(s3.begin(),s3.end());
    cout<< (s4==s3 ? "YES" : "NO")<<"\n";
}