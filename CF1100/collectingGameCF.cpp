#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<ll,ll>> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i].first;
            p[i].second = i;
        }
        sort(p.begin(),p.end());
        vector<ll> a(n,0);
        a[0] = p[0].first;
        for(int i=1;i<n;i++){
            a[i] = a[i-1] + p[i].first;
        }
        stack<int> st;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            st.push(p[i].second);
            if(i==n-1 || p[i+1].first>a[i]){
                while(!st.empty()){
                    v[st.top()] = i;
                    st.pop();  
                }   
            }
        } 
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;

    }
    
}