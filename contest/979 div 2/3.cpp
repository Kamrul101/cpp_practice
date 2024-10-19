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
        bool check = false;
        for(int i=0;i<n-1;i++){
            if(s[i]=='1' && s[i+1]=='1'){
                check = true;
                break;
            }
        }
        if(s[0]=='1' || s[n-1]=='1') cout<<"YES"<<endl;
        else if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}