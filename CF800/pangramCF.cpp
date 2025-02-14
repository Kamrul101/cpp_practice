#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int t;
    cin>>t;
    string s;
    cin>>s;
    int n = s.size();
    transform(s.begin(),s.end(),s.begin(),::tolower);
    sort(s.begin(),s.end());
    int sz = unique(s.begin(),s.end())-s.begin();
    if(sz == 26){
        cout<<"YES\n";
    }
    else cout<<"NO\n";

    
    
}