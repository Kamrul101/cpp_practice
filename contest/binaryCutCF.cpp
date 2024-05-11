#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// ll a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt=1, target=0;
        
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1])continue;
            else cnt++;
            if(s[i-1]=='0' && s[i]=='1') target=1;
        }
        cout<<cnt-target<<endl;
        
    }
    
}
