#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    string a,b,c;
    cin>>a>>b;
    int i,j;
    for(i=0,j=0; a[i]!='\0'&& b[j]!='\0'; i++,j++ ){
        cout<<(a[i]^b[j]);
    }
    cout<<c<<endl;
    
}