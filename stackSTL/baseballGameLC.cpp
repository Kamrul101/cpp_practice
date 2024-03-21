#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    stack<int> st;
    for(auto u:v){
        if(u.size()>1){
            st.push(stoi(u));
        }
        else if(isdigit(u[0])){
            st.push(u[0]-'0');
        }
        else if(u[0]=='D'){
            if(!st.empty()){
                int a1 = st.top();
                st.push(a1*2);
            }
        }
        
        else if(u[0]=='+'){
            int a1=-1,a2=-1;
            if(!st.empty()){
                a1=st.top();
                st.pop();
            }
            if(a1!=-1 && !st.empty()){
                a2=st.top();
                st.pop();
            }
            if(a2!=-1){
                int a3 = a1+a2;
                st.push(a2);
                st.push(a1);
                st.push(a3);
            }
            else{
                st.push(a1);
            }
        }
        else{
            if(!st.empty()){
                st.pop();
            }
        }
    }
    int sum=0;
    while(!st.empty()){
        sum+=st.top();
        st.pop();
    }
    cout<<sum<<endl;
}
