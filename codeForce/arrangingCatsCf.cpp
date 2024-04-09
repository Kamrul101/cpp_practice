#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int m[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
     int n,rm=0,ap=0;
     cin>>n;
     string s1,s2;
     cin>>s1>>s2;
     for(int i=0;i<n;i++){
        if(s1[i]=='1' && s2[i]=='0'){
            rm++;
        }
        else if(s1[i]=='0' && s2[i]=='1'){
            ap++;
        }
        else continue;
     }
     cout<<max(rm,ap)<<endl;
    }

}
