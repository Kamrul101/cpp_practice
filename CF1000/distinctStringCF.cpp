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
    cin >> s;
 
    int a[28], b[28];
 
    memset(a, 0, sizeof(a) );
    memset(b, 0, sizeof(b) );
 
    for(auto c : s){
        int tmp = c - 'a';
        a[tmp]++;
    }
 
    int ans = 0;
    for(auto c : s){
 
        int tmp = c - 'a';
        a[tmp]--;
        b[tmp]++;
 
        int tmpCnt = 0;
        for(int i = 0; i < 26; i++){
            tmpCnt += min(1, a[i]) + min(1, b[i]);
        }
 
        ans = max(ans, tmpCnt);
 
    }
 
    cout << ans << endl;
    }
    
}