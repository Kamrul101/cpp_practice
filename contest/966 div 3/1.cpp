#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;

int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
     string s;
     cin>>s;
    

     if(s[0]=='1' && s[1]=='0' && s.size()>2){
        if(s[2]-'0'== 0){
            cout<<"NO"<<endl;
        }
        else if(s[2]=='1' && s.size()-2==1){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
     }
     else  cout<<"NO"<<endl;
    
     
    } 
}