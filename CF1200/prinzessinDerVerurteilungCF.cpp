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
    int t;
    cin>>t;
    vector<string> v;
    for(char i='a';i<='z';i++){
        string x;
        x+=i;
        v.push_back(x);
    }
    for(char i='a';i<='z';i++){
        for(char j = 'a';j<='z';j++){
            string x;
            x+=i;
            x+=j;
            v.push_back(x);
        }
    }
    for(char i='a';i<='z';i++){
        for(char j = 'a';j<='z';j++){
            for(char k='a';k<='z';k++){
                string x;
                x+=i;
                x+=j;
                x+=k;
                v.push_back(x);
            }
        }
    }
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(auto u:v){
            if(s.find(u)==-1){
                cout<<u<<endl;
                break;
            }
        }
        
    }
    
}