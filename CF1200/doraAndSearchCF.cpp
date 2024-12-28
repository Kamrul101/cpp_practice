#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int i=0, j=n-1,mn=1,mx=n;
        bool ans = false;
        while(i<j){
            if(a[i]==mn){
                i++;
                mn++;
            }
            else if(a[i]==mx){
                i++;
                mx--;
            }
            else if(a[j]==mn){
                j--;
                mn++;
            }
            else if(a[j]==mx){
                j--;
                mx--;
            }
            else{
                ans = true;
                break;
            }
        }
        if(ans) cout<<i+1<<" "<<j+1<<endl;
        else cout<<-1<<endl;
    }
    
}