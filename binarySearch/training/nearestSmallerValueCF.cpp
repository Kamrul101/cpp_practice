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
    stack<pair<int,int>> st;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        while(!st.empty() && st.top().first>=x){
            st.pop();
        }
        if(st.empty()) v.push_back(0);
        else v.push_back(st.top().second);

        st.push({x,i+1});
    }
    
    for(auto u:v){
        cout<<u<<" ";
    }
    cout<<endl;
}