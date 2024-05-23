#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    // vector<string> v = {"1","10","100","1000","10000","100000","1000000","10000000","100000000","1000000000"};
    while(t--){
        string s;
        cin>>s;
        //can be done in both ways
        // if(s=="1") cout<<0<<endl;
        // else{
        //     int i=0;
        //     for(auto u:v){
        //         if(u.size()==s.size()){
        //             break;
        //         }
        //         i++;
        //     }
        //     ll num=0,num2=0;
        //     for(auto u :s){
        //         num= num*10 + (u - '0');
        //     }
        //     string s2 = v[i];
        //     for(auto u :s2){
        //         num2= num2*10 + (u -'0');
        //     }
        //     int ans = num - num2;
        //     cout<<ans<<endl;
        // }
        int x= s[0]-'0';
        x--;
        s[0]=x+'0';
        ll num=0;
        for(auto u:s){
            num = num *10 + (u-'0');
        }
        cout<<num<<endl;
    }
    
}
