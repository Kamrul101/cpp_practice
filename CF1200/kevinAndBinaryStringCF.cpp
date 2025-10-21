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

        bool check = true;
        int n = s.size(), idx;
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                int j = i;
                while(j<n && s[j]!='1') cnt++,j++;
                idx = i;
                check = false;
                break;
            }
        }
        if(check){
            cout<<1<<" "<<n<<" "<<1<<" "<<1<<endl;
            continue;
        }
        int cnt1 = idx;
        // cout<<cnt1<<endl;
        int x1,x2;
        if(cnt1<=cnt){
            x1 = 1;
            x2 = n-cnt1;
        }
        else{
            x1 = cnt1-cnt+1;
            x2 = n-cnt;
        }
        cout<<1<<" "<<n<<" "<<x1<<" "<<x2<<endl;
        
    }
    
}