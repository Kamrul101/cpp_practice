#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx]={0};
int preSum[mx]={0};
int main() {
    optimize();
    string s;
    cin>>s;
    for(int i=0;i<s.size()-1;i++){
        if(s[i] == s[i+1]){
            a[i+1] = 1;
        }
        
    }
    for(int i=1;i<=s.size();i++){
        preSum[i] = preSum[i-1] + a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<preSum[r-1] - preSum[l-1]<<endl;
    }
    
}