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
        int x;
        cin>>x;
        string t;
        cin>>t;
        int n = sqrt(x);
        if(n*n!=x) cout<<"NO"<<endl;
        else{
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            matrix[0][i] = 1;
            matrix[n-1][i] = 1; 
            matrix[i][0] = 1;
            matrix[i][n-1] = 1;
        }
        string s;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                s+=to_string(matrix[i][j]);
            }
        }
        if(s==t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        }
    }
    
}