#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 1e7+123;


int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int mx = -1;
        for(int i=0;i<s.size();i++){
            mx = max(mx,s[i]-'a');
        }
        cout<<mx+1<<endl;
    }
    
   
    
}