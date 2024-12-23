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
    int mx = 1;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            int cnt=0;
            int j = i;
            while(s[j]==s[i]){
                cnt++;
                j++;
            }
            mx = max(mx,cnt);
            i=j-1;
        }
    }
    cout<<mx<<endl;
    
}