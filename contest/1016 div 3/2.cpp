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
        string s;
        cin>>s;
        bool check = false;
        int ans = 0,cntR=0,cntL=0;
        int  i;
        for(i=s.size()-1;i>=0;i--){
            if(s[i]!='0'){
                break;
            }
            else{
                check=true;
                cntR++;
            }
        }
        for(int j=0;j<i;j++){
            if(s[j]!='0') cntL++;
        }
        cout<<cntR+cntL<<endl;
        
    }
    
}