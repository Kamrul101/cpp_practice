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
        if(s1.size()>=s2.size()){
            swap(s1,s2);
        }
        int n = s1.size();
        int m = s2.size();
        int mx = 0;
        for(int i=0;i<n;i++){
            string temp;
            for(int j=i;j<n;j++){
                temp+=s1[j];
                int t = s2.find(temp);
                if(t!=-1){
                    mx = max((int)temp.size(),mx);
                }
                else break;
                // cout<<temp<<endl;
            }
        }
        cout<<(n+m)-2*mx<<endl;
        
    }
    
}