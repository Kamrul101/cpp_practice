#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    
    int t;
    cin>>t;
    while (t--)
    {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<n-2;i++){
        
        if((s[i] =='m' && s[i+1]=='a' && s[i+2]=='p')||
        (s[i] =='p' && s[i+1]=='i' && s[i+2]=='e')){
            count++;
            i+=2;
        }
    }
    cout<<count<<endl;
    }
 
}



