#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
typedef long long ll ;
// const int mx = 2e5+123;
// long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char, int> m;
        for(auto u:s){
            m[u]++;
        }
        
        int oddCnt=0, oneCnt=0;
        for(auto u:m) {
            if(u.second%2) oddCnt++;
            
        }
        if(oddCnt>k+1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    
    
}