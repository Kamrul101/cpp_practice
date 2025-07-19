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
    string s;
    cin>>s;

    int n=s.size();
    for (int i=1; i<n; i++) {
        if (s[i]==s[i - 1]) {
            for(char c = 'a'; c <= 'z'; c++) {
                if (c != s[i - 1] && (i+1== n || c != s[i + 1])) {
                    s[i] = c;
                    break;
                }
            }
        }
    }
    cout<<s<<endl;
    
}