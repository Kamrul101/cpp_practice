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
        vector<int> v(32,0);
        int x= n;
        for(int i=0;i<32;i++){
            v[i] = x%2;
            x/=2;
        }
        for(int i=0,j;i<32;){
            if (v[i] == 1 && v[i + 1] == 1) {
                int j = i + 1;
                while (j < 32 && v[j] == 1) {
                    v[j] = 0;
                    j++;
                }
                v[i] = -1;
                v[j] = 1;
                i = j;
            }
            else i++;
        }
        cout<<32<<endl;
        for(int i=0;i<32;i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    
}