#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int n;
    string s;
    cin>>n>>s;
    int count=0;
    for(int i=0; i<n; i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout<<count<<"\n";
}