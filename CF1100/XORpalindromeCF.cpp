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
        int cntGood = 0,cntFaulty=0,odd=0;
        int l=0,r=n-1;
        while(l<r){
            if(s[l]==s[r]) cntGood+=2;
            else cntFaulty++;
            l++;
            r--;
        }
        if(n&1) odd++;
        string t;
        for(int i=0;i<=n;i++){
            int x = i;
            x-=cntFaulty;
            if(x<0) {
                t+='0';
                continue;
            }
            x = max((x%2),(x-cntGood));
            x = max(0,x-odd);
            if(x) t+='0';
            else t+='1';
            
        }
        cout<<t<<endl;
        
    }
    
}