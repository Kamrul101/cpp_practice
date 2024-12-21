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
        bool check1 = false, check2 = false;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='p') check1=true;
        }
        for(int i=1;i<s.size();i++){
            if(s[i]=='s') check2=true;
        }
        if(check1 && check2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
    
}