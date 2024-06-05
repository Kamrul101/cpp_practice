#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 1e5+123;
// int dp[mx]={0};


int main() {
    optimize();
    int n;
    cin>>n;
    string s;
    cin>>s;
    deque<char> dq;
    for(int i=0;i<n;i++){
        if((n-i)%2){
            dq.push_back(s[i]);
        }
        else dq.push_front(s[i]);
    }
    for(int i=0;i<dq.size();i++){
        cout<<dq[i];
    }
    cout<<endl;
}
