#include<bits/stdc++.h>
using namespace std;

// int main(){
//     string str= "hello";
    
//     int txtLength = str.length();
//     string rev;
//     int j;
//     for(int i=txtLength -1; i>=0; i--){
//         rev = rev + str[i];
//         }
    
//     cout<<rev<<endl;
    
// }

// using swap
int main(){
    int m,n;
    cin>>m>>n;
    string str;
    cin>>str;
    int txtLength  = str.length();
    int i, j, temp;
    for(i = m-1, j = n-1; i<j; i++, j--){
        temp = str[i];
        str[i]=str[j];
        str[j]= temp;
    }
    cout<<str<<"\n";
}