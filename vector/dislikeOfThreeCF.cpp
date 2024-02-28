#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int t;
    cin>>t;
    vector<int> v;
    for(int i=1; i<10000;i++){
        if(i%3!=0 && i%10 != 3){
            v.push_back(i);
        }
    }
    while(t--){
        int n;
        cin>>n;
        cout<<v[n-1]<<"\n";
    }   
}
// int main() {
//     optimize();
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int count =0;
//         int i=1;
//         while(1){
//             if(i%3 != 0 && i%10 !=3){
//                 count++;
//                 if(count == n){
//                     cout<<i<<"\n";
//                     break;
//                 }
//             }
//             i++;
//         }
//     }    
// }