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
    while(t--){
        char a[8][8];
        string s;
        getline(cin,s);
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>a[i][j];
            }
        }
        bool ansB=true;
        for(int i=0;i<8;i++){
            int cnt=0;
            for(int j=0;j<8;j++){
                if(a[i][j]=='R'){
                    cnt++;
                }
            }
            if(cnt==8) {
                cout<<'R'<<endl;
                ansB = false;
                break;
            }
        }
        if(ansB) cout<<'B'<<endl;
        
    }
}
