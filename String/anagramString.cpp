#include <bits/stdc++.h>
using namespace std;
// using nested loop O(n^2)

// int main()
// {
//     string a1 = "decimal";
//     string a2 = "medicela";
//     int i, j;
//     int len1 = a1.length();
//     int len2 = a2.length();
//     bool found = 0, not_found = 0;
//     if (len1 == len2)
//     {
//         for (i = 0; i < len1; i++)
//         {
//             for (j = 0; j < len2; j++)
//             {
//                 found = 0;
//                 if (a1[i] == a2[j])
//                 {
//                     found = 1;
//                     break;
//                 }
//             }
//             if (found == 0)
//             {
//                 not_found = 1;
//             }
//         }
//         if (not_found == 1)
//         {
//             cout << "Not Anagram";
//         }
//         else
//         {
//             cout << "Anagram";
//         }
//     }
//     else
//     {
//         cout << "String mismatch";
//     }
// }
int main()
{
    string a1 = "decimal";
    string a2 = "medical";
    int i, j;
    int len1 = a1.length();
    int len2 = a2.length();
    int H[26]={0};
    for(i=0;i<len1;i++){
        H[a1[i]-97]+=1;
    }
    for(j=0;j<len2;j++){
        H[a2[j]-97]-=1;
        if(H[a2[j]-97]<0){
            cout<<"not anagram";
            break;
        }
    }
    if(a2[j]=='\0'){
        cout<<"Anagram";
    }
}