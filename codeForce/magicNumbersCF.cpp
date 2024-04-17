#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    string s;
    cin>>s;
    int sz = s.size();
    int i;
    bool  ans = true;
    for(i=0;i<sz;i++){
    string temp1,temp2,temp3;
        temp1+=s[i];
        temp2+=s[i];
        temp2+=s[i+1];
        temp3+=s[i];
        temp3+=s[i+1];
        temp3+=s[i+2];
        if(temp3== "144"){
            i+=2;
         }
         else if(temp2=="14" ) i++;
         else if(temp1 == "1") continue;
         else {
            cout<<"NO"<<endl;
            ans = false;
            break;
         }
        temp1="";
        temp2="";
        temp3="";
         
    }
    if(ans) cout<<"YES"<<endl;
}
