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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int goodPairs=0,goodPairs0=0, goodPairs1=0;
        int i=0,j=n-1,cnt0=0,cnt1=0;

        while(i<j){
            if(s[i]==s[j]) {
                goodPairs++;
                if(s[i]=='0') goodPairs0++;
                else goodPairs1++;
            }
            if(s[i]=='0') cnt0++;
            if(s[j]=='0') cnt0++;
            if(s[i]=='1') cnt1++;
            if(s[j]=='1') cnt1++;
            
            i++;
            j--;
        }
        int badPairs = n/2 - k;
        bool check = true;
        if(n/2<k) cout<<"NO"<<endl;
        else if(badPairs<0) cout<<"NO"<<endl;
        else if(badPairs>cnt0 || badPairs> cnt1) cout<<"NO"<<endl;
        else if((cnt0-badPairs)%2!=0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
        
    }
    
}