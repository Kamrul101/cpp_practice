#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    stack<int> st;
    vector<int>nse(n);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()>=a[i]){
            st.pop();
        }
        if(st.empty()) nse[i] = -1;
        else nse[i] = st.top();
        st.push(a[i]);
    }
    for(int i=0;i<n;i++) cout<<nse[i]<<" ";
    
}