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
        string s;
        cin>>s;
        int fb = 0, tb=0,move=0;
        for(auto u:s){
            if(u == '('){
                fb++;
            }
            else if(u== '['){
                tb++;
            }
            else if (u==')'){
                if(fb>0){
                    fb--;
                    move++;
                }
            }
            else {
                if(tb>0){
                    tb--;
                    move++;
                }
            }
        }
        cout<<move<<endl;
    }

    
}