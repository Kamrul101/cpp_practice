#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 2e5 + 123;


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        string s,t1,t2;
        cin>>s;
        int n=s.size();
        bool ans = false;
        for(int i=1;i<n;i++){
            int x1,x2;
            t1 =s.substr(0,i);
            t2 =s.substr(i,n-1);
            x1 = stoi(t1);
            x2=stoi(t2);
            if(s[i]!='0' && x1<x2){
                cout<<x1<<" "<<x2<<endl;
                ans =true;
                break;
            }
            

            
        }
        if(!ans) cout<<-1<<endl;
    }
}