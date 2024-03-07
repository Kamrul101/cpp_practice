#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int t;
    cin>>t;
        int a[1000],b[1000],count=0;
    for(int i=0;i<t;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(a[i]==b[j]) count++;
        }
    }
    cout<<count<<endl;

}