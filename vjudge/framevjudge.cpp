#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    optimize();
    
    while(1){
        int m ,n;
        cin>>m>>n;
        if(m==0 && n==0) break;
        for(int i=0;i<n;i++) cout<<'#';
        cout<<'\n';
        for(int i= 1;i<m-1;i++){
            cout<<'#';
            for(int j=1;j<n-1;j++){
                cout<<'.';
            }
            cout<<'#';
            cout<<"\n";
        }
        for(int i=0;i<n;i++) cout<<'#';
        cout<<"\n";
        cout<<"\n";
    }
}