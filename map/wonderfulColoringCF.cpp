#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int n;
    cin>>n;
    while(n--){
        map<char,int> m;
        string s;
        cin>>s;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(m[s[i]] <2) {
                sum++;
                m[s[i]]++;
            }
        }
        
        cout<<sum/2<<endl;
    }

}