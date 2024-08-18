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
    int n,t;
    cin>>n>>t;
    if(t<10){
    string s,temp = to_string(t);

    for(int i=0;i<n;i++){
        s+=temp;
    }
    if(s.size()>n) cout<<-1<<endl;
    else cout<<s<<endl; 
    }
    else{
        if(n==1) cout<<-1<<endl;
        else{
            string s="1";
            for(int i=1;i<n;i++){
                s+='0';
            }
            cout<<s<<endl;
        }
    }
    
}