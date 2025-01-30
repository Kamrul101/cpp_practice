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
        string s1,s2;
        cin>>s1>>s2;
        bool ans = false;
        ll i;
        for(i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                if(s1[i]<s2[i]){
                    swap(s1[i],s2[i]);
                }
                ans = true;
                break;
            }
        }
        i++;
        while(ans && i<s1.size()){
            if(s1[i]>s2[i]){
                swap(s1[i],s2[i]);
            }
            i++;
        }
        cout<<s1<<endl<<s2<<endl;
        
    }
    
}