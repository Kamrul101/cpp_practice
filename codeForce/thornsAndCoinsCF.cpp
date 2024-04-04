#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
       int n,count=0;
       cin>>n;
       string s,temp;
       cin>>s;
       for(int i=0;i<n;i++){
        if(s[i]=='*' && s[i+1]=='*') break;
        else temp+=s[i];
       }
       for(int i=0;i<temp.size();i++){
        if(temp[i]=='@'){
           count++; 
        }
        else continue;
       }
       cout<<count<<endl;
       
    }

}
