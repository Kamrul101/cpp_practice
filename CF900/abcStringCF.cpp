#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =51;
// int a[mx];
char temp[mx];
int n;
bool check(){
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(temp[i]=='(') cnt++;
        else cnt--;
        if(cnt<0) return false;
    }
    if(cnt==0) return true;
    else return false;
}

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int m = 1<<3;
        n = s.size();
        bool ans = false;
        for(int mask=0;mask<m;mask++){
            for(int i=0;i<n;i++){
                int cur = s[i]-'A';
                if(mask&(1<<cur)) temp[i] = '(';
                else temp[i] = ')';
            }
            if(check()){
                ans = true;
                break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}