#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    string s;
    cin>>s;
    stack<char> st;
    for(auto u :s){
        if(st.empty()){
            st.push(u);
        }
        else if(!st.empty() && st.top()==u){
            st.pop();
        }
        else{
            st.push(u);
        }
    }
    string temp;
    while(!st.empty()){
        temp+=st.top();
        st.pop();
    }
    reverse(temp.begin(),temp.end());
    cout<<temp<<endl;
}
