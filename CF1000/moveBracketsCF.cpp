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
        stack<char> st;
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(st.size()!=0){
                    st.pop();
                    cnt++;
                }
            }
        }
        int rem = s.size() - cnt*2;
        cout<<rem/2<<endl;
    }
}