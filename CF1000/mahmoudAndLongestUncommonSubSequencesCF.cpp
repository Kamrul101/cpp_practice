#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )






int main() {
    optimize();
    string s1,s2;
    cin>>s1>>s2;
    if(s1==s2) cout<<-1<<endl;
    else{
        cout<<(s1.size()>=s2.size()? s1.size():s2.size())<<endl; 
    }

    
}