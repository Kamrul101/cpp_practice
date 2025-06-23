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
        string s1,s2;
        cin>>s1>>s2;
        if(s1==s2){
            cout<<2*s1.size()<<endl;
            continue;
        }
        int i=0;
        while(i<s1.size() && s1[i]==s2[i]) i++;
        if(s1[i]+1<s2[i]){
            cout<<2*i<<endl;
        }
        else{
            int ans = 2*i + 1;
            for(int j=i+1;j<s1.size();j++){
                if(s1[j]=='9' && s2[j]=='0') ans++;
                else break;
            }
            cout<<ans<<endl;
        }
        
    }
    
}