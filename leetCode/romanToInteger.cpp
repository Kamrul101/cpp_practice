#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    
    map<int,int>val;
    val['I'] = 1;
    val['V'] = 5;
    val['X'] = 10;
    val['L'] = 50;
    val['C'] = 100;
    val['D'] = 500;
    val['M'] = 1000;
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(val[s[i]]>=val[s[i+1]]){
            sum+=val[s[i]];
        }
        else sum-=val[s[i]];
    }
    cout<<sum<<endl;
    
}