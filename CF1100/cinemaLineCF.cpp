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
    int n;
    cin>>n;
    map<int,int> mp;
    mp[25] = 0;
    mp[50] = 0;
    mp[100]=0;
    int sellCnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==25){
            mp[25]++;
            sellCnt++;
        }
        else if(x==50){
            if(mp[25]){
                mp[25]--;
                mp[50]++;
                sellCnt++;
            }
        }
        else if(x==100){
            if(mp[25] && mp[50]){
                mp[25]--;
                mp[50]--;
                sellCnt++;
                mp[100]++;
            }
            else if(mp[25]>=3){
                mp[25]-=3;
                sellCnt++;
                mp[100]++;
            }
        }
    }
    if(sellCnt==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}