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
        int w,h,a,b,x1,y1,x2,y2;
        cin>>w>>h>>a>>b>>x1>>y1>>x2>>y2;
        bool check = false;
      
        if((y1-y2)%b==0){
            if(y1==y2){
                if((x1-x2)%a==0) check = true;
            }
            else check = true;
        }
        if((x1-x2)%a==0){
            if(x1==x2){
                if((y1-y2)%b==0) check = true;
            }
            else check = true;
        }

        /*
        short hand
        if(x1!=x2 && (x1-x2)%a==0) check = true;
        if(y1!=y2 && (y1-y2)%b==0) check = true;
        if((x1-x2)%a==0 && (y1-y2)%b==0) check = true;
        */
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
}