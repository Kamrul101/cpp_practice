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
        string s,s1,s2;
        cin>>s1>>s2;
        // for(int i=0;i<n;i++) s1+=s[i];
        // for(int i=8;i<2*n;i++) s2+=s[i];
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        cout<<((s1==s2)?"YES":"NO")<<endl;
        
    }
    
}