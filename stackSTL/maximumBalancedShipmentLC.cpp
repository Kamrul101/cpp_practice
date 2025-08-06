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

    int n;
    cin>>n;
    vector<int> w(n);
    for(int i=0;i<n;i++) cin>>w[i];
    stack<int> st;
    vector<int> pge(n);
    for(int i=0;i<n;i++){
        while(!st.empty() && w[st.top()]<=w[i]){
            st.pop();
        }
        if(!st.empty()) pge[i] = st.top();
        else pge[i] = -1;
        st.push(i);
    }
    // for(int i=0;i<n;i++) cout<<pge[i]<<" ";

    int cnt = 0;
    int idx = -1;
    for(int i=0;i<n;i++){
        if(pge[i]!=-1){
            //can be same pge, so count only one
            if(pge[i]>idx){ 
                cnt++;
                idx = i;
            }
        }
    }
    cout<<cnt<<endl;
    
}