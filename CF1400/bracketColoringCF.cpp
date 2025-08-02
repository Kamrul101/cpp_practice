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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') cnt1++;
            else cnt1--;
        }
        if(cnt1!=0){
            cout<<-1<<endl;
            continue;
        }
        stack<char> st1,st2;
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(!st2.empty()){
                    ans.push_back(2);
                    mp[2]++;
                    st2.pop();
                }
                else{
                    st1.push(s[i]);
                    ans.push_back(1);
                    mp[1]++;
                }
            }
            else{
                if(!st1.empty()){
                    ans.push_back(1);
                    mp[1]++;
                    st1.pop();
                }
                else{
                    st2.push(s[i]);
                    ans.push_back(2);
                    mp[2]++;
                }
            }
        }
        cout<<mp.size()<<endl;
        for(auto u:ans){
            if(mp.size()==1) cout<<1<<" ";
            else cout<<u<<" ";
        }
        cout<<endl;

    }
    
}