#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    int t,sum=0;
    cin>>t;
    // map<string,int> m;
    // m["Tetrahedron"]=4;
    // m["Cube"]=6;
    // m["Octahedron"]=8;
    // m["Dodecahedron"]=12;
    // m["Icosahedron"]=20;
    
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='T'){
            sum+=4;
        }
        else if(s[0]=='C'){
            sum+=6;
        }
        else if(s[0]=='O'){
            sum+=8;
        }
        else if(s[0]=='D'){
            sum+=12;
        }
        else sum+=20;
    }
    cout<<sum<<endl;
   
}