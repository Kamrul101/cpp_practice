#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s[n-1]=='B'){
            if(count(s.begin(),s.end(),'B')==1){
                cout<<"Alice"<<endl;
                continue;
            }
            else {
                cout<<"Bob"<<endl;
                continue;
            }
        }
        if(s[n-2]=='A'|| s[0]=='A'){
            cout<<"Alice"<<endl;
        }
        else cout<<"Bob"<<endl;
        
    }
    
}