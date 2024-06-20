#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 2e5 + 123;
int a[mx];


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s;
        int n = s.size(),cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
           if(s[i]==s[i+1]) {
            cnt1++;
            break;
           }

        }
        if(s=="()") cout<<"NO"<<endl;
        else if(cnt1) {
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i++){
            cout<<"()";
        }
        cout<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++) cout<<'(';
            for(int i=n;i<2*n;i++) cout<<')';
            cout<<endl;
        }
        
    }
}