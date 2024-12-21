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
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int cnt=0,pos=-1;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0) cnt++;
            if(i>0 && i<n-1 && v[i]==0){
                pos = i;
            }
        }
        int posI=0,posJ=n-1;
        if(cnt==n) cout<<0<<endl;
        else if(cnt==0) cout<<1<<endl;
        else if(cnt>=1){
            if(pos==-1) cout<<1<<endl;
            else{
                while(v[posI]==0){
                    posI++;
                }
                while(v[posJ]==0){
                    posJ--;
                }

                bool ans = false;
                for(int i=posI;i<=posJ;i++){
                    if(v[i]==0){
                        cout<<2<<endl;
                        ans = true;
                        break;
                    }
                }
                if(!ans) cout<<1<<endl;
            }
        }
        else cout<<2<<endl;

    }
    
}