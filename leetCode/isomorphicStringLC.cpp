#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    map<char,int> p1;
    map<char,int> p2;
    vector<int>a,b;
    string s1,s2;
    cin>>s1>>s2;

    for(int i=0;i<s1.size();i++){
        p1[s1[i]]++;
    }
    for(int i=0;i<s1.size();i++){
        p2[s2[i]]++;
    }
    for(auto u:p1){
        a.push_back(u.second);
    }
    for(auto u:p2){
        b.push_back(u.second);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
           
    if(a.size()!=b.size()) cout<<'f'<<endl;
    else{
        bool f =true;
            for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]) {
                cout<<'f'<<endl;
                f = false;
                break;
            }
            
        }

    if(f) cout<<'t'<<endl;
    }

}
