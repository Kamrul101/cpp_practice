#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    string s,temp;
    cin>>s;
    cout<<s[0];
    for(int i=1;i<n;i++){
       if(s[i+1]=='a' || s[i+1]=='e'){
        cout<<'.';
       }
       cout<<s[i];
    }
    cout<<endl;
    
    }
    
    
}