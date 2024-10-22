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
        string s;
        cin>>s;
        int pos=s.size();
        for(int i = s.size()-1;i>=0;i--){
            if(s[i]-'0'>=5){
                if(i==0){
                    s = '1'+s;
                    pos = i +1;
                }
                else{
                    s[i-1]++;
                    pos = i;
                }
            }
        }
        for(int i=pos;i<s.size();i++) s[i] = '0';
        cout<<s<<endl;
        
    }
    
}