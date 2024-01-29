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
    string str = "hello";
    int txtLength  = str.length();
    int i, j, temp;
    for(i = 0, j = txtLength -1; i<j; i++, j--){
        temp = str[i];
        str[i]=str[j];
        str[j]= temp;
    }
    cout<<str;
}