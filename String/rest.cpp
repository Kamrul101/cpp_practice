//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        string s = to_string(N);
        int num=0;
        for(auto u : s){
            
            num += (u - '0');
            
            
        }
        int rev = 0, digit=0;

        
        
        int temp = num;
        while(num!=0){
            digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }
        if(rev==temp){
            return 1;
        }
        else {
           return 0; 
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends