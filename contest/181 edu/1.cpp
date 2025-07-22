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
        int fft = s.find("FFT"); 
        int ntt = s.find("NTT");
        // cout<<fft<<" "<<ntt<<endl;
        if(fft==-1 && ntt==-1){
            cout<<s<<endl;
            continue;
        } 
        sort(s.begin(),s.end());
        reverse(s.begin(),s.end());
        cout<<s<<endl;
        
    }
    
}