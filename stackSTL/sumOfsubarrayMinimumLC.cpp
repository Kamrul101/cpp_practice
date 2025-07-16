#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int arr[mx];
vector<int> findNSE(vector<int>& a){
        int n=a.size();
        stack<int> st;
        vector<int>nse(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && a[st.top()]>=a[i]){
                st.pop();
            }
            if(st.empty()) nse[i] = n;
            else nse[i] = st.top();
            st.push(i);
        }
        return nse;
    }
    vector<int> findPSEE(vector<int>& a){
        int n=a.size();
        stack<int> st;
        vector<int>psee(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && a[st.top()]>a[i]){
                st.pop();
            }
            if(st.empty()) psee[i] = -1;
            else psee[i] = st.top();
            st.push(i);
        }
        return psee;
    }
int main() {
    optimize();
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> nse = findNSE(arr);
    vector<int> psee = findPSEE(arr);
    // int MOD = 1000000007;
    int total=0;
    // for(int i=0;i<n;i++) cout<<nse[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<n;i++) cout<<psee[i]<<" ";
    // cout<<endl;
    for(int i=0;i<n;i++){
        int left = i-psee[i];
        // cout<<left<<" ";
        int right=nse[i]-i;
        // cout<<right<<endl;
        total=(total+1LL*right*left*arr[i])%MOD;
    }
    cout<<total<<endl;
    
}