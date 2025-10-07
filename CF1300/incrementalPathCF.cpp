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
        int n,m;
        cin>>n>>m;

        string s;
        cin>>s;

        set<int> st;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            st.insert(x);
        }

        int x = 1;

        for(int i=0;i<n;i++){
            if(s[i]=='A') x++;
            else{
                x++;
                while(st.count(x)) x++;
            }
            st.insert(x);

            if(s[i]=='B'){
                while(st.count(x)) x++;
            }
        }
        cout<<(int) st.size()<<endl;
        for(auto u:st) cout<<u<<" ";
        cout<<endl;

    }
    
}