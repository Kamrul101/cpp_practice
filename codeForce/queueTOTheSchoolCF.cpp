#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    optimize();
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t>0){
        for(int i=0; i<n-1;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
            i++;
            }
        }
        t--;
    }
    cout<<s<<endl;
}