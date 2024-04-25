#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int a[mx];



int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s1,s2="Timur";
    cin>>s1;
    if(n>5) cout<<"NO"<<endl;
    else{
    sort(s2.begin(),s2.end());
    sort(s1.begin(),s1.end());
    if(s2==s1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    }
}
