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
    string s;
    cin>>s;
    map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    int cntOdd=0;
    for(auto u:mp){
        if(u.second%2) cntOdd++;
    }
    if(cntOdd>1) cout<<"NO SOLUTION"<<endl;
    else{
        string t1,t2;
        for(auto u:mp){
            if(u.second%2==0){
                for(int i=1;i<=u.second/2;i++){
                    t1+=u.first;
                    
                }
            }
            else{
                for(int i=1;i<=u.second;i++){
                    t2+=u.first;
                }
            }
        }
        string t3=t1;
        reverse(t3.begin(),t3.end());
        t1+=t2;
        t1+=t3;
        cout<<t1<<endl;
    }

}