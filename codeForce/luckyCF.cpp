#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e6+123;
long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int sum1=0,sum2=0;
    for(int i=0;i<3;i++){
        sum1+=(s[i]-'0');
    }
    for(int i=3;i<6;i++){
        sum2+=(s[i]-'0');
    }
    cout<<((sum1==sum2)?"YES":"NO")<<endl;
    }
    
}