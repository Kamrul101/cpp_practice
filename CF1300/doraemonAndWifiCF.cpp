#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
#define fraction() cout.unsetf(ios::floatfield); cout.precision(12); cout.setf(ios::fixed, ios::floatfield);
// const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    string s1,s2;
    cin>>s1>>s2;
    fraction();
    int posX=0,posY=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='+') posX++;
        else posX--;
    }
    bool check = false;
    for(int i=0;i<s2.size();i++){
        if(s2[i]=='+') {
            s2[i]='1';
            posY++;
        }
        else if(s2[i]=='-'){
            s2[i]='0';
            posY--;
        }
        else{
            check = true;
        }
    }
    if(!check){
        if(posX!=posY){
            cout<<0.0<<endl;
        }
        else cout<<1.0<<endl;
    }
    else{
        int n=s1.size();
        vector<int> ans;
        for(int mask=0;mask<(1<<n);mask++){
            bool ok = true;
            for(int i=0;i<n;i++){
                if(s2[i]!='?' && (s2[i]-'0')!=(mask>>i&1)){
                    ok = false;
                }
            }
            if(!ok) continue;
            int pos = 0;
            for(int i=0;i<n;i++){
                if((mask>>i) & 1) pos++;
                else pos--;
            }
            ans.push_back(pos);
        }
        ld cnt=0;
        for(auto u:ans){
            if(u==posX) cnt++;
        }
        ld total = ans.size();
        cout<<(cnt/total)<<endl;

    }
    
}