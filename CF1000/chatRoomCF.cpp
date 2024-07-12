#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 2e5 + 123;
bool check(string s,string t){
    
    for(int i=0,j=0;i<s.size();i++){
        
        if(s[i]==t[j]){
            j++;
            if(j==5) return true;
        }

    }
    return false;
}

int main()
{
    optimize();
    string s, t= "hello";
    cin>>s;
    bool ans = check(s,t);
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}