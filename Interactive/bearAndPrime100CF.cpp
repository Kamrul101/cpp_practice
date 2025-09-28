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
    // optimize();
    vector<int> v = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int cnt = 0;
    bool check = false;
    for(int i=0;i<15;i++){
        int x = v[i];

        if(x<10){
            for(int i=0;i<2;i++){
                cout<<x<<endl;
                // cout<<flush<<endl;

                string val;
                cin>>val;

                if(val=="yes") cnt++;
                else break;
                x*=x;
            }
        }
        else{
            cout<<x<<endl;
            // cout<<flush<<endl;

            string val;
            cin>>val;
            if(val=="yes") cnt++;

        }
        if(cnt>=2) {
            check= true;
            break;
        }
    }
    if(check){
        cout<<"composite"<<endl;
    }
    else cout<<"prime"<<endl;

    cout<<flush;
    
}